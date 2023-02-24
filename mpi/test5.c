#include "mpi.h"
#include <stdlib.h>
#include <stdio.h>

/*
 * Desciption :
 *    Ce programme est un petit programme de test avec MPI.
 *    Il permet d'effectuer sendrecv.c
 * Résultat :
 *    Il affiche :
 *          Moi, processus 0, j’ai recu 1001 du processus 1.
 *          Moi, processus 1, j’ai recu 1000 du processus 0.
 */

#define ETIQUETTE 100

int main(int argc, char *argv[]) {
    int rang, valeur, x, num_proc;
    
    MPI_Status statut;
    MPI_Init (&argc,&argv);
    MPI_Comm_rank ( MPI_COMM_WORLD , &rang); /* On suppose avoir exactement 2 processus */
    
    num_proc=(rang+1)%2;
    valeur=rang+1000;
    
    MPI_Sendrecv (&valeur, 1, MPI_INT , num_proc, ETIQUETTE, &x, 1,
    MPI_INT , num_proc, ETIQUETTE, MPI_COMM_WORLD , &statut); /* MPI_Sendrecv_replace(&valeur, 1, MPI_INT, num_proc, ETIQUETTE,
num_proc, ETIQUETTE, MPI_COMM_WORLD, &statut); */
    
    printf("Moi, processus %d, j’ai recu %d du processus %d.\n", rang,x,num_proc);
    MPI_Finalize ();

    return(0);
}