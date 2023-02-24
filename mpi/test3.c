#include "mpi.h"
#include <stdlib.h>
#include <stdio.h>

/*
 * Desciption :
 *    Ce programme est un petit programme de test avec MPI.
 *    Il permet d'effectuer MPI_Recv
 * Résultat :
 *    Il affiche "Moi, processus 5, j’ai recu 1000 du processus 2."
 */

#define ETIQUETTE 100

int main(int argc, char *argv[]) {
    int rang, valeur;

    MPI_Status status;
    MPI_Init (&argc,&argv);
    // process rank (number)
    MPI_Comm_rank ( MPI_COMM_WORLD , &rang);

    if (rang == 2) {
        valeur=1000;
        // send (value,nb_val,val_type, witch_precess, )
        MPI_Send (&valeur, 1, MPI_INT , 5, ETIQUETTE, MPI_COMM_WORLD );
    } 
    else if (rang == 5) {
        MPI_Recv (&valeur, 1, MPI_INT , 2, ETIQUETTE, MPI_COMM_WORLD , &status);
        printf("Moi, processus 5, j’ai recu %d du processus 2.\n", valeur);
    }

    MPI_Finalize ();
    return(0);
}