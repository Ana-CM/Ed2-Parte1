#include "cenario1.h"
#include <iostream>
#include <fstream>
#include "leituraCenario1.h"
#include "quickSort.cpp"
#include "Dataset.cpp"
#include <string>
#include <windows.h>
using namespace std;

void cenario1(int n, int* vectorSize)
{
  for (int j=0; j < n ; j++ )
  {
    for( int i=0; i<5; i++)
    {
        string* books = new string[vectorSize[j]];
        books = createVector(vectorSize[j]) ;
        quickSortVector(books, vectorSize[j]);

        Dataset* booksRegistration = new Dataset[vectorSize[j]];
        booksRegistration = createObject(vectorSize[j]);
        QuickSortObj(booksRegistration, vectorSize[j]);   
        
        //Sleep (1);
      }
  }
}