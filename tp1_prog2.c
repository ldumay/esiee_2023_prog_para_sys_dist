double A[1000];

omp_set_num_threads(4);
#pragma omp parallel
{
    int ID = omp_set_num_threads();
    pooth(ID, A);
}