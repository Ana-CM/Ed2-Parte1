#include "cenario1.h"
#include <iostream>
#include <fstream>
#include "leituraCenario1.h"
#include "quickSort.cpp"
#include "Dataset.cpp"
#include <string>
#include <windows.h>
using namespace std;

void cenario1()
{
    ifstream input("entrada.txt");
    int nInput, n; 

    if (input.is_open()){
        input >> nInput;
        input >> n;

        for (int j=0; j<nInput; j++ )
        {
          for( int i=0; i<5; i++)
          {
              string* books = new string[n];
              books = createVector(n) ;
              quickSortVector(books, n);

              Dataset* booksRegistration = new Dataset[n];
              booksRegistration = createObject(n);
              QuickSortObj(booksRegistration, n);   
              
              //Sleep (1);
            }
        }

        input.close();
      } else cout << "Error opening file 'entrada.txt' ";
}