#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "Dataset.hpp"
#include <string>
using namespace std;

    void quickSortPartitionVector(string *v, int light, int right, int *i, int *j, long long int* vectorID, int *copies, int* comparisons);
    void quickSortOrderVector(string *v, int light, int right, long long int* vectorID, int *copies, int* comparisons);
    void quickSortVector(string *v, int n, double *time, int *copies, int* comparisons);
    long long int positionID(string position);
    
    void QuickSortObj(Dataset *v, int n, double *time, int *copies, int* comparisons);
    void QuickSort_orderObj(Dataset *v, int light, int right, int *copies, int* comparisons);
    void QuickSort_partitionObj(Dataset *v, int light, int right,int *i, int *j, int *copies, int* comparisons);

#endif // QUICKSORT_H
