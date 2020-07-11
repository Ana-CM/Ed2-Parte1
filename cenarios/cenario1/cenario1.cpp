#include "cenario1.h"
#include "Dataset.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

long long int positionVectorID(string position)
{   
    string delimiter = "\",\"", empty = "0", book[25];
    long long int ID;

    for( int i = 0; i < 25; i++)
    {
        book[i] = position.substr(0, position.find(delimiter));
        position.erase(0, position.find(delimiter) + delimiter.length());
    }

    book[11] = book[11].empty()? empty : book[11];
    ID = stoll(book[11]);

    return ID;
}

void quickSortPartitionVector(string *v, int light, int right, int *i, int *j)
{
    string pivo, aux;
    *i = light; *j = right;
    pivo = v[(*i + *j)/2]; /* obtem o pivo x */

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

void quickSortOrderVector(string *v, int light, int right){
    int i, j;
    quickSortPartitionVector(v, light, right, &i, &j);
    if (light < j) quickSortOrderVector(v, light, j);
    if (i < right) quickSortOrderVector(v, i, right);
}

void quickSortVector(string *v, int n){
    quickSortOrderVector(v, 0, n-1);
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

void QuickSort_orderObj(Dataset *v, int light, int right) {
 int i, j;
 QuickSort_partitionObj(v, light, right, &i, &j);
 if (light < j) QuickSort_orderObj(v, light, j);
 if (i < right) QuickSort_orderObj(v, i, right);
}


void QuickSortObj(Dataset *v, int n) {
 QuickSort_orderObj(v, 0, n-1);
}