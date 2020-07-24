#ifndef QUICKSORTINSERCAO_H
#define QUICKSORTINSERCAO_H
#include <string>
#include "quicksortInsercao.cpp"
using namespace std;

    void insertion_sort(string *titles, int low, int n, long long int *comparisons, long long int *copies);
    int partition(string *titles, int low, int high, long long int *comparisons, long long int *copies);
    void quick_sort(string *titles, int low,int high, long long int *comparisons, long long int *copies);
    void hybrid_quick_sort(string *titles, int low, int high, long long int *comparisons, long long int *copies);
    void quicksortInsercao(string *title, int tam, double *time, long long int *comparisons, long long int *copies);

#endif // QUICKSORTINSERCAO_H