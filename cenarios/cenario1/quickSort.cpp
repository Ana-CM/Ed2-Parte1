#include "quickSort.h"
#include "Dataset.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>
#include <time.h> 
using namespace std;

long long int positionVectorID(string position)
{   
    string delimiter = "\",\"", book[11];
    long long int ID;

    for( int i = 0; i < 12; i++)
    {
        book[i] = position.substr(0, position.find(delimiter));
        position.erase(0, position.find(delimiter) + delimiter.length());
    }

    try {
        ID = stoll(book[11]);
    }catch(invalid_argument){
        ID = 0;
    } 

  //cout<< ID << endl;

   return ID;
}

void quickSortPartitionVector(string *v, int light, int right, int *i, int *j)
{
    string pivo, aux;
    *i = light; *j = right;
    pivo = v[(*i + *j)/2]; /* obtem o pivo x */

    do 
    {
        while (!(  positionVectorID(pivo) <= positionVectorID(v[*i]) )) (*i)++;
        while (  positionVectorID(pivo) < positionVectorID(v[*j]) ) (*j)--;
        if (*i <= *j) 
        {
            aux = v[*i];
            v[*i] = v[*j];
            v[*j] = aux;
            (*i)++; (*j)--;
         }
    } while (*i <= *j);
}

void quickSortOrderVector(string *v, int light, int right, double *time){
    int i, j;
    clock_t start, finish;
    start = clock();

    quickSortPartitionVector(v, light, right, &i, &j);
    if (light < j) quickSortOrderVector(v, light, j, time);
    if (i < right) quickSortOrderVector(v, i, right, time);

    finish = clock();
    *time = *time + ( (double) (finish - start) ) / CLOCKS_PER_SEC;
}

void quickSortVector(string *v, int n, double *time){
    quickSortOrderVector(v, 0, n-1, time);
}

// ordenação  do objeto
void QuickSort_partitionObj(Dataset *v, int light, int right,int *i, int *j)
 {
    Dataset pivo, aux;
    *i = light; *j = right;
    pivo = v[(*i + *j)/2]; /* obtem o pivo x */

    do 
    {
        while (!(pivo.getId() <= v[*i].getId())) (*i)++;
        while (pivo.getId() < v[*j].getId()) (*j)--;
        if (*i <= *j) 
        {
            aux = v[*i];
            v[*i] = v[*j];
            v[*j] = aux;
            (*i)++; (*j)--;
         }
    } while (*i <= *j);
}

void QuickSort_orderObj(Dataset *v, int light, int right, double *time) {
 int i, j;

 clock_t start, finish;
 start = clock();

 QuickSort_partitionObj(v, light, right, &i, &j);
 if (light < j) QuickSort_orderObj(v, light, j, time);
 if (i < right) QuickSort_orderObj(v, i, right, time);

 finish = clock();
 *time = *time + ( (double) (finish - start) ) / CLOCKS_PER_SEC;
}

void QuickSortObj(Dataset *v, int n, double *time) {
 QuickSort_orderObj(v, 0, n-1, time);
}