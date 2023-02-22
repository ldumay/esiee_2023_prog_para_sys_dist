#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

//Nombre de steps
int x = 100;

#pragma omp parallel
{
    for(int i=0; i<x; i++){
        4.0 / ( 1 + i ^ 2)
    }
}