#include <stdio.h>
#include <math.h>
#include <omp.h>

//Nombre de steps
float result = 0;
int x = 100;

float fonction_de_f(int x){
    return 4.0 / ( 1 + x * 2);
}

float sum_des_f(){
    float sum = 0;
    for(int i=0; i<x; i++){
        float f = fonction_de_f(i);
        printf("[f:%f]", f);
        sum += f;
    }
    return sum;
}

int main()
{
    printf("steps : %d\n", x);
    result = sum_des_f();
    printf("sum : %f\n", result);
    sum_des_f();
    printf("Resultat : sum=%f\n", result);
}