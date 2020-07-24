#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>
#include <time.h> 

using namespace std;


void insertion_sort(string *titles, int low, int n, long long int *comparisons, long long int *copies)  
{ 
    for(int i=low+1;i<n+1;i++) 
    { 
        string val = titles[i] ; 
        *copies = *copies + 1;
        int j = i ; 
        while (j>low && titles[j-1]>val) 
        { 
            titles[j]= titles[j-1] ; 
            j-= 1; 
            *comparisons = *comparisons + 1;
        } 

        titles[j]= val ; 
    }  
} 
  
// As duas funções a seguir são usadas
// para executar uma classificação rápida no vetor.
  
// Função de partição para quicksort 
int partition(string *titles, int low, int high, long long int *comparisons, long long int *copies) 
{ 
    string pivot = titles[high];
    *copies = *copies + 1; 
    int i ,j; 
    i = low; 
    j = low; 

    for (int i = low; i < high; i++) 
    { 
        if(titles[i]<pivot) 
        {  
            string temp = titles[i]; 
            titles[i] = titles[j]; 
            titles[j] = temp; 
            j += 1; 
            *comparisons = *comparisons + 1;
            *copies = *copies + 1;
        } 
    } 

    string temp = titles[j]; 
    titles[j] = titles[high]; 
    titles[high] = temp; 
    *copies = *copies + 1;

    return j;  
} 
  
  
// Função para chamar a função de partição
// e executa uma classificação rápida no vetor
void quick_sort(string *titles, int low,int high, long long int *comparisons, long long int *copies) 
{ 
  if (low < high) 
  {  
    int pivot = partition(titles, low, high,comparisons, copies);  
    quick_sort(titles, low, pivot-1,comparisons, copies) ; 
    quick_sort(titles, pivot + 1, high,comparisons, copies) ; 
  } 
} 
  
// Hybrid function -> Quick + Insertion sort  
void hybrid_quick_sort(string *titles, int low, int high, long long int *comparisons, long long int *copies) 
{ 
  while (low < high)  
    { 
     // Se o tamanho do vetor for menor
     // além do limite aplica classificação de inserção
     // e interrompe a recursão 
  
        if ( high-low + 1 < 10) 
        { 
            insertion_sort(titles, low, high,comparisons, copies); 
            break; 
        } 
        else 
        { 
            int pivot = partition(titles, low, high,comparisons, copies) ; 
        
            // Quicksort otimizado que funciona em
            // os vetores menores primeiro
            // Se o lado esquerdo do pivô
            // está abaixo da direita, classifique a parte esquerda
            // e mova para a parte direita do vetor
        
            if (pivot-low<high-pivot) 
            { 
                hybrid_quick_sort(titles, low, pivot - 1,comparisons, copies);  
                low = pivot + 1; 
            } 
            else
            { 
            // Se o lado direito do pivô for menor
            // à esquerda, classifique o lado direito e
            // move para o lado esquerdo 
                
                hybrid_quick_sort(titles, pivot + 1, high,comparisons, copies); 
                high = pivot-1; 
            } 
    
        } 
   } 
} 

void quicksortInsercao(string *title, int tam, double *time, long long int *comparisons, long long int *copies)
{   
    clock_t start, finish;
    start = clock();

    hybrid_quick_sort(title, 0, tam-1,comparisons, copies);

    finish = clock();
    *time = *time + ( (double) (finish - start) ) / CLOCKS_PER_SEC;
}