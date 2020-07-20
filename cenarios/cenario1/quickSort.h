#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "Dataset.hpp"
#include <string>
using namespace std;

    void quickSortPartitionVector(string *v, int light, int right, int *i, int *j);
    void quickSortOrderVector(string *v, int light, int right, double *time);
    void quickSortVector(string *v, int n, double *time);
    long long int positionVectorID(string position);

    void QuickSortObj(Dataset *v, int n, double *time);
    void QuickSort_orderObj(Dataset *v, int light, int right, double *time);
    void QuickSort_partitionObj(Dataset *v, int light, int right,int *i, int *j);

#endif // QUICKSORT_H
