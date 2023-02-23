#include <stdio.h>
#include <omp.h>

# define NPOINTS 1000
# define MXITR 1000

struct d_complex{
    double r;
    double i;
};

struct d_complex c;

int numoutside = 0;

void testpoint(void) {
	struct d_complex z;
	int iter;
	double temp;
	z=c;
	for (iter=0; iter<MXITR; iter++){
		temp = (z.r*z.r)-(z.i*z.i)+c.r;
		z.i = z.r*z.i*2+c.i;
		z.r = temp;
		if ((z.r*z.r+z.i*z.i)>4.0) {
			numoutside++;
			break;
		}
	}
}

void testpoint(void);

int main(){
    int i, j;
    double area, error, eps = 1.0e-5;
    /*
	 *	Avant :
	 *	#pragma omp parallel for default(shared) private (c,eps)
	 *	
	 *	Après :
	 *	#pragma omp parallel for default(shared) private(c,j)  firstprivate(eps
	 */
	#pragma omp parallel for default(shared) private(c,j)  firstprivate(eps)
    for (i=0; i<NPOINTS; i++) {
        for (j=0; j<NPOINTS; j++) {
            c.r = -2.0+2.5*(double)(i)/(double)(NPOINTS)+eps;
            c.i = 1.125*(double)(j)/(double)(NPOINTS)+eps;
            testpoint();
        }
    }
    area=2.0*2.5*1.125*(double)(NPOINTS*NPOINTS-numoutside)/(double)(NPOINTS*NPOINTS);
    error=area/(double)NPOINTS;
	//-
	printf("-- Superficie de l'ensemble de Mandelbrot ---\n");
	printf("DEBUT\n", eps);
	printf("Variables de base :\n");
    printf("- NPOINTS:(%d)\n", NPOINTS);
	printf("- MXITR:(%d)\n", MXITR);
	printf("Résultat :\n");
	printf("- area:(%f)\n", area);
	printf("- error:(%f)\n", error);
	printf("- eps:(%f)\n", eps);
	printf("FIN", eps);
}