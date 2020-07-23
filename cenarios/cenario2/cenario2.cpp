#include "cenario2.h"
#include "vetorTitulo.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void cenario2(int vectorSize[], int n)
{
    for (int j=0; j < n ; j++ )
    {
        for( int i=0; i<5; i++)
        {   
            string* titles = new string[vectorSize[j]];
            createVectorTitles(titles, vectorSize[j]) ;

            for (int i = 0; i < 4; i++)
            {
                cout<< titles[i]<<endl;
            }
            

            delete[] titles;
        }
    }
    
}