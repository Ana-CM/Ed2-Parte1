#include <iostream>
#include <fstream>
#include "cenarios/cenario1/cenario1.h"
#include "cenarios/cenario1/leituraCenario1.h"
#include <string>
using namespace std;

int main()
{
    ifstream input("entrada.txt");
    int nInput, n; // numero de valores de N que se seguem

    if (input.is_open()){
        input >> nInput;

        for (int j=0; j<nInput; j++ )
        {
            input >> n;
            for( int i=0; i<5; i++){
              string* books = new string[n];
              books = createVector(n) ;
            }
        }
        input.close();
      } else cout << "Error opening file 'entrada.txt' ";

    return 0;
}