#include <stdio.h>
#include <math.h>
#include <omp.h>

//Nombre de steps
float sum = 0;
int x = 100;

float fonction_de_f(int x){
    return 4.0 / ( 1 + x ^ 2);
}

float add_to_sum_des_f(float x){
    sum += x;
}

int main()
{
    printf("steps : %d\n", x);
    printf("sum : %f\n", sum);

    float f;
    for(int i=0; i<x; i++){
        f = fonction_de_f(i);
        printf("f: %f\n", f);
        add_to_sum_des_f(f);
    }

    printf("Resultat : sum=%f\n", sum);
}