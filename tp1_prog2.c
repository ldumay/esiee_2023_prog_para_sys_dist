#include <stdio.h>
#include <omp.h>

//Nombre de steps
int x = 100;

int main()
{
    #pragma omp parallel
    {
        float sum;
        float f;

        for(int i=0; i<x; i++){
            f = 4.0 / ( 1 + i ^ 2);
            sum += f;
        }
        printf("f: %f\n", f);

        printf("sum=%f", sum);
    }
}