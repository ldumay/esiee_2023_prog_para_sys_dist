#include <stdio.h>
#include <omp.h>

//Nombre de steps
int x = 100;

int main()
{
    #pragma omp parallel
    {
        for(int i=0; i<x; i++){
            4.0 / ( 1 + i ^ 2);
        }
    }
}