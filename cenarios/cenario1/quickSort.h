#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "Dataset.hpp"
#include <string>
using namespace std;

    void quickSortPartitionVector(string *v, int light, int right, int *i, int *j, long long int* vectorID);
    void quickSortOrderVector(string *v, int light, int right, long long int* vectorID);
    long long int positionID(string position);
    void quickSortVector(string *v, int n, double *time);

    void QuickSortObj(Dataset *v, int n, double *time);
    void QuickSort_orderObj(Dataset *v, int light, int right);
    void QuickSort_partitionObj(Dataset *v, int light, int right,int *i, int *j);

#endif // QUICKSORT_H
