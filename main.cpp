#include <iostream>
#include <fstream>
#include "cenarios/cenario1/cenario1.h"
#include "cenarios/cenario1/leituraCenario1.h"
#include "cenarios/cenario1/Dataset.cpp"
#include "cenarios/cenario1/cenario1.cpp"
#include <string>
using namespace std;

int main()
{
    ifstream input("entrada.txt");
    int nInput, n; 

    if (input.is_open()){
        input >> nInput;
        input >> n;

        for (int j=0; j<nInput; j++ )
        {
          for( int i=0; i<5; i++){

            string* books = new string[n];
            books = createVector(n) ;
            //quickSortVector(books, n);

            Dataset* booksRegistration = new Dataset[n];
            booksRegistration = createObject(n);
            //QuickSortObj(booksRegistration, n);   
            
          }
        }

        input.close();
      } else cout << "Error opening file 'entrada.txt' ";
     
    return 0;
}