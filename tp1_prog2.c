#include <stdio.h>
#include <math.h>
#include <omp.h>

int x = 100;
float moyenne, f, sum, step = 0.0;

int main()
{
    printf("steps : %d\n", x);
    step = 1.0;
    //Somme des fonctions f
    for(int i=0; i<x; i++){
        x = (i+0.5) * step;
        //fonction f
        f = 4.0 / ( 1.0 + x * x);
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