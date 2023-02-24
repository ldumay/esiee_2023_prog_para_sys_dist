#include "mpi.h"
#include <stdio.h>

/*
 * Desciption :
 *    Ce programme est un petit programme de test avec MPI.
 *    Il permet d'effectuer Hello world distribué
 *    et d'utiliser les fonctions MPI_Init, MPI_Comm_size, MPI_Comm_rank et MPI_Finalize.
 * Résultat :
 *    Il affiche "Hello, world. I am 0 of 1" pour un seul processus.
 */

int main(int argc, char *argv[])
{
	int rank;
	int nprocs;

	//Initialisation de MPI - code séquentiel
	MPI_Init(&argc, &argv);

	/*
	 * Récupération du nombre de processus.
	 * MPI_COMM_WORLD : le communateur, l'ensemble des processus
	 * nprocs : le nombre de processus
	 */
	MPI_Comm_size(MPI_COMM_WORLD, &nprocs);
	/*
	 * Parallélisation du code.
	 * Permet de faire commuter le code suivant entre les processus 
	  * selon le nombre de processus.
	 * MPI_COMM_WORLD : le communateur, l'ensemble des processus
	 * rank : le rang du processus
	 */
	MPI_Comm_rank(MPI_COMM_WORLD,&rank);

	printf("Hello, world. I am %d of %d\n", rank, nprocs);
	fflush(stdout);

	//Fin de MPI - code parallèle
	MPI_Finalize();
	return 0;
}