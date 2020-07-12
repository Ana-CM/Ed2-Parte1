#ifndef CENARIO1_H
#define CENARIO1_H
#include "Dataset.hpp"
#include <string>
using namespace std;

    void quickSortPartitionVector(string *v, int light, int right, int *i, int *j);
    void quickSortOrderVector(string *v, int light, int right);
    void quickSortVector(string *v, int n);
    long long int positionVectorID(string position);


   void QuickSortObj(Dataset *v, int n);
   void QuickSort_orderObj(Dataset *v, int light, int right);
   void QuickSort_partitionObj(Dataset *v, int light, int right,int *i, int *j);

#endif // CENARIO1_H
