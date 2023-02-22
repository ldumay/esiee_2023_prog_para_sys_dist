#include <stdio.h>
#include <omp.h>

//Nombre de steps
int x = 100;

int main()
{
    #pragma omp parallel
    {
        float result;
        for(int i=0; i<x; i++){
            result = 4.0 / ( 1 + i ^ 2);
        }
        printf("result : %f\n", result);
    }
}