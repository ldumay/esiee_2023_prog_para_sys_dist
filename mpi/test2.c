#include "mpi.h"
#include <stdio.h>

/*
 * Desciption :
 *    Ce programme est un petit programme de test avec MPI.
 *    Il permet d'effectuer pair et impair distribué
 *    et d'utiliser les fonctions MPI_Init, MPI_Comm_size, MPI_Comm_rank et MPI_Finalize.
 * Résultat :
 *    Il affiche "Hello, world. I am 0 of 1" pour un seul processus.
 */

int main(int argc, char *argv[])
{
    int rank;
    int nprocs;

    MPI_Init(&argc, &argv);

    MPI_Comm_size(MPI_COMM_WORLD, &nprocs);
    MPI_Comm_rank(MPI_COMM_WORLD,&rank);

    if (rank % 2 == 0)
        printf("Rank %d est pair\n", rank);
    else
        printf("Rank %d est impair\n", rank);
    fflush(stdout);

    MPI_Finalize();
    return 0;
}