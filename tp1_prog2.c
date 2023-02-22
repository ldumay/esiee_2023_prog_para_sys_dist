#include <stdio.h>
#include <omp.h>

//Nombre de steps
float sum;
int x = 100;

int main()
{
    printf("steps : %d\n", x);

    #pragma omp parallel
    {
        float f;
        for(int i=0; i<x; i++){
            f = 4.0 / ( 1 + i ^ 2);
            sum += f;
        }
        printf("f: %f\n", f);
    }

    printf("Resultat : sum=%f\n", sum);
}