#include <stdio.h>
#include <string.h>
#include "mpi.h"

/*
 * Desciption :
 *    Ce programme est un petit programme de test avec MPI.
 *    Il permet d'effectuer MPI_Recv
 * Résultat :
 *    Il affiche :
 *    		Bonjour de 1!
 *   		Bonjour de 2!
 *  		Bonjour de 3!
 * 			Bonjour de 4!
 * 			Bonjour de 5!
 * 			Bonjour de 6!
 */

int main(int argc, char* argv[]) {

    int my_rank; /* rang du processus*/
    int p; /* nombre de processus */
    int source; /* rang de l'émetteur */
    int dest; /* rang du récepteur */
    int tag = 0; /* étiquette */
    char message[100]; /* pour stocker le message */
    MPI_Status status;

    /* status du message */
    MPI_Init(&argc, &argv); /* Démarrer MPI */
    MPI_Comm_rank(MPI_COMM_WORLD, &my_rank);
    MPI_Comm_size(MPI_COMM_WORLD, &p);

    if (my_rank != 0) { /* si je ne suis pas le processus racine */
        /* Creation du message */
        sprintf(message, "Bonjour de %d!", my_rank);
        dest = 0;
        /* Utiliser strlen+1 pour que '\0' soit transmis! */
        MPI_Send(message, strlen(message)+1, MPI_CHAR, dest, tag,
        MPI_COMM_WORLD);
    }
    else { /* my_rank == 0 */
        for (source = 1; source < p; source++) {
            MPI_Recv(message, 100, MPI_CHAR, source, tag, MPI_COMM_WORLD,
            &status);
            printf("%s\n", message);
        }
    }
    MPI_Finalize(); /* Quitter MPI */
} /* fin de la fonction main */