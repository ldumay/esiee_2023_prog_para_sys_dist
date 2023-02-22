#include <stdio.h>
#include <math.h>
#include <omp.h>

float getPI(){
    long num_steps = 10000;
    int i; double step, x, pi, sum = 0.0;
    step = 1.0 / (double) num_steps;
    for(i=0; i<num_steps; i++){
        x = (i+0.5) * step;
        sum = sum + 4.0 / (1.0 + x * x);
    }
    return pi = step * sum;
}

int main()
{
	#pragma omp parallel
	{
		int NB_THREADS = omp_get_num_threads();
        int ID = omp_get_thread_num();
        int TIME = omp_get_wtime();
        printf("Threads");
		printf("\n[Nb threads:(%d)]", NB_THREADS);
        printf("[Id thread:(%d)]", ID);
        printf("[Temps en secondes:(%d)]", TIME);
	}
}