#include <stdio.h>
#include <omp.h>

// Partie : Travailler avec des boucles

#define MAX 5

void modelOne(){
    int i, j, A[MAX];
    j = 5;
    for(i=0; i<MAX; i++){
        j += 2;
        A[i] = big(j);
    }
    printf("modelOne - A:(%d)\n", A);
}

void modelTwo(){
    int i, A[MAX];
    #pragma omp parallel for
    for(i=0; i<MAX; i++){
        int j = 5+2*(i+1);
        A[i] = big(j);
    }
    printf("modelTwo - A:(%d)\n", A);
}

void main(){
    modelOne();
    modelTwo();
}