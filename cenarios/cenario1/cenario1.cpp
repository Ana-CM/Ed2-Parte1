#include "cenario1.h"
#include <iostream>
#include <fstream>
#include "leituraCenario1.h"
#include "quickSort.cpp"
#include "Dataset.cpp"
#include <string>
using namespace std;

void cenario1(int n, int* vectorSize)
{
  double time, totalTime;
  long long int totalCopies, totalComparisons;
  int copies, comparisons;
  ofstream exitArq("saida.txt");

  exitArq<< endl;
  exitArq<< "Analise dos vetores" << endl;
  for (int j=0; j < n ; j++ )
  {
    exitArq<< "vetores de tamanho " << vectorSize[j] <<endl;
    totalCopies = 0; totalComparisons = 0; totalTime = 0;
    for( int i=0; i<5; i++)
    {   
        time = 0, copies = 0, comparisons = 0;
        string* books = new string[vectorSize[j]];
        createVector(vectorSize[j], books) ;
        quickSortVector(books, vectorSize[j], &time, &copies, &comparisons); 

        totalCopies = totalCopies + copies; 
        totalComparisons =  totalComparisons + comparisons; 
        totalTime = totalTime + time;

        delete[] books;
    }

      exitArq<< "Cópias (valor médio): " << totalCopies/5 << endl;
      exitArq<< "Comparações (valor médio): " << totalComparisons/5 << endl;
      exitArq<< "Tempo (valor médio): " << totalTime/5 << endl;
      exitArq<< endl;
  }

  exitArq<< endl;
  exitArq<< "Analise dos objetos " << endl;
  for (int j=0; j < n ; j++ )
  {
    exitArq<< "objetos de tamanho " << vectorSize[j] <<endl;
    totalCopies = 0; totalComparisons = 0; totalTime = 0;
    for( int i=0; i<5; i++)
    {   
        time = 0, copies = 0, comparisons = 0;
        Dataset* booksRegistration = new Dataset[vectorSize[j]];
        createObject(vectorSize[j], booksRegistration );
        QuickSortObj(booksRegistration, vectorSize[j], &time, &copies, &comparisons);  

        totalCopies = totalCopies + copies; 
        totalComparisons =  totalComparisons + comparisons; 
        totalTime = totalTime + time;

        delete[] booksRegistration;
    }

      exitArq<< "Cópias (valor médio): " << totalCopies/5 << endl;
      exitArq<< "Comparações (valor médio): " << totalComparisons/5 << endl;
      exitArq<< "Tempo (valor médio): " << totalTime/5 << endl;
      exitArq<< endl;
  }
}