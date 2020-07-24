#include "quickSort.h"
#include "Dataset.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>
#include <time.h> 
using namespace std;

long long int positionID(string position)
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

void quickSortPartitionVector(string *v, int light, int right, int *i, int *j, long long int* vectorID, int* copies, int* comparisons)
{
    string aux;
    long long int pivo,  aux2;

    *i = light; *j = right;
    pivo = vectorID[(*i + *j)/2]; // obtem o pivo x 

    do 
    {
        while (!(  pivo <= vectorID[*i] )){ (*i)++; *comparisons = *comparisons + 1;}
        while ( pivo < vectorID[*j] ){ (*j)--; *comparisons = *comparisons + 1;}
        if (*i <= *j) 
        {
            aux = v[*i];  // copia do vetor de livros na posição i
            aux2 = vectorID[*i]; // copia do vetor dos IDs dos livros na posição i
            v[*i] = v[*j];
            vectorID[*i] = vectorID[*j];
            v[*j] = aux;
            vectorID[*j] = aux2;
            (*i)++; (*j)--;
            *copies = *copies + 2;
         }
    } while (*i <= *j);
}

void quickSortOrderVector(string *v, int light, int right, long long int* vectorID, int *copies, int* comparisons){
    int i, j;
    quickSortPartitionVector(v, light, right, &i, &j, vectorID, copies, comparisons);
    if (light < j) quickSortOrderVector(v, light, j, vectorID, copies, comparisons);
    if (i < right) quickSortOrderVector(v, i, right, vectorID, copies, comparisons);
}

void quickSortVector(string *v, int n, double *time, int *copies, int* comparisons){
    clock_t start, finish;
    long long int* vectorID = new long long int[n]; 
    start = clock();
    
    for(int k = 0; k < n; k++)
    {   string aux = v[k];
        vectorID[k] = positionID(aux);
    }
 
    quickSortOrderVector(v, 0, n-1, vectorID, copies, comparisons);

    finish = clock();
    *time = *time + ( (double) (finish - start) ) / CLOCKS_PER_SEC;
    delete []vectorID;
}


// ordenação  do objeto
void QuickSort_partitionObj(Dataset *v, int light, int right,int *i, int *j, int *copies, int* comparisons)
 {
    Dataset pivo, aux;
    *i = light; *j = right;
    pivo = v[(*i + *j)/2]; // obtem o pivo x 

    do 
    {
        while (!(pivo.getId() <= v[*i].getId())){ (*i)++; *comparisons = *comparisons + 1;}
        while (pivo.getId() < v[*j].getId()){ (*j)--; *comparisons = *comparisons + 1; }
        if (*i <= *j) 
        {
            aux = v[*i]; // cópia do objeto na posiçao i
            v[*i] = v[*j];
            v[*j] = aux;
            (*i)++; (*j)--;
            *copies = *copies + 1;
         }
    } while (*i <= *j);
}

void QuickSort_orderObj(Dataset *v, int light, int right, int *copies, int* comparisons){
    int i, j;
    QuickSort_partitionObj(v, light, right, &i, &j, copies, comparisons);
    
    if (light < j) QuickSort_orderObj(v, light, j, copies, comparisons);
    if (i < right) QuickSort_orderObj(v, i, right, copies, comparisons);
}

void QuickSortObj(Dataset *v, int n, double *time, int *copies, int* comparisons) {
    clock_t start, finish;
    start = clock();
    QuickSort_orderObj(v, 0, n-1, copies, comparisons);
    finish = clock();
    *time = *time + ( (double) (finish - start) ) / CLOCKS_PER_SEC;
}