#include "cenario1.h"
#include <string>
using namespace std;

void quickSortParticao(string *v, int esq, int dir, int *i, int *j){
    string pivo, aux;
    *i = esq; *j = dir;
    pivo = v[(*i + *j)/2]; /* obtem o pivo x */

   /* do{
        while (!(pivo.rating-avg <= v[*i].rating-avg)) (*i)++;
        while (pivo.rating-avg < v[*j].rating-avg) (*j)--;
        if(*i <= *j) {
            aux = v[*i];
            v[*i] = v[*j];
            v[*j] = aux;
            (*i)++; (*j)--;
        }
      } while (*i <= *j);*/
}

void quickSortOrdena(string *v, int esq, int dir){
    int i, j;
    quickSortParticao(v, esq, dir, &i, &j);
    if (esq < j) quickSortOrdena(v, esq, j);
    if (i < dir) quickSortOrdena(v, i, dir);
}

void quickSort(string *v, int n){
    quickSortOrdena(v, 0, n-1);
}
