#include <stdio.h>
#include <math.h>
#include <omp.h>

int x = 10000;
float moyenne, f, sum = 0.0;

int main()
{
    printf("steps : %d\n", x);
    //Somme des fonctions f
    for(int i=0; i<x; i++){
        //fonction f
        f = 4.0 / ( 1 + i * i);
        //-
        printf("[f:%f]", f);
        sum += f;
    }
    //-
    printf("\nsum : %f\n", sum);
    //-
    moyenne = sum / x;
    printf("\nResultat : moyenne=%f\n", moyenne);
}