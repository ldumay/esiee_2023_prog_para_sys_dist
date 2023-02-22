#include <stdio.h>
#include <math.h>
#include <omp.h>

#define NB_THREADS = 10;

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
	#pragma omp parallel num_threads()
	{
        //-init
		int get_NB_THREADS = omp_get_num_threads();
        int get_ID = omp_get_thread_num();
        int get_TIME = omp_get_wtime();
        printf("\nThreads");
		printf("[Nb threads:(%d)]", get_NB_THREADS);
        printf("[Id thread:(%d)]", get_ID);
        printf("[TIME:(%d)]", get_TIME);

        

        //-Résulat attendu : PI
        float itsPI = getPI();
        printf("[PI:(%f)]", itsPI);
	}
}