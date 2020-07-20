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
  double time;
/*
  cout<< "tempos de execucao do vetor" << endl;
  for (int j=0; j < n ; j++ )
  {
    cout<< "vetor de tamanho " << vectorSize[j] <<endl;
    for( int i=0; i<5; i++)
    {   
        time = 0;
        string* books = new string[vectorSize[j]];
        books = createVector(vectorSize[j]) ;
        quickSortVector(books, vectorSize[j], &time); 

        cout << time << endl;
    }
  }
*/
  cout<< "tempos de execucao do objeto " << endl;
  for (int j=0; j < n ; j++ )
  {
    cout<< "objeto de tamanho " << vectorSize[j] <<endl;
    for( int i=0; i<5; i++)
    {   
        time = 0;
        Dataset* booksRegistration = new Dataset[vectorSize[j]];
        booksRegistration = createObject(vectorSize[j]);
        QuickSortObj(booksRegistration, vectorSize[j], &time);  

        cout << time << endl; 
    }
  }
}