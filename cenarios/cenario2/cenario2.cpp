#include "cenario2.h"
#include "vetorTitulo.h"
#include "quicksortInsercao.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void cenario2(int vectorSize[], int n)
{   
    ofstream exitArq("saidaCenario2.txt");
    long long int copies, comparisons;
    double time;

    exitArq<< endl;
    exitArq<< "Analise dos vetores" << endl;
    for (int j=0; j < n ; j++ )
    {   
         exitArq<< "vetores de tamanho " << vectorSize[j] <<endl;
        
        for (int i = 0; i < 5; i++)
        {
            
            string* titles = new string[vectorSize[j]];
            createVectorTitles(titles, vectorSize[j]) ;
             
/*          copies = 0, comparisons = 0, time = 0;
            exitArq<< "QuickSort" <<endl;
            //função
            exitArq<< "Cópias: " << copies << endl;
            exitArq<< "Comparações: " << comparisons << endl;
            exitArq<< "Tempo: " << time << endl;
            exitArq<< endl;

            copies = 0, comparisons = 0, time = 0;
            exitArq<< "QuickSort Mediana" <<endl;
            //função
            exitArq<< "Cópias: " << copies << endl;
            exitArq<< "Comparações: " << comparisons << endl;
            exitArq<< "Tempo: " << time << endl;
            exitArq<< endl;
*/
            copies = 0, comparisons = 0, time = 0;
            exitArq<< "QuickSort Inserção" <<endl;
            quicksortInsercao(titles, vectorSize[j], &time, &comparisons, &copies);
            exitArq<< "Cópias: " << copies << endl;
            exitArq<< "Comparações: " << comparisons << endl;
            exitArq<< "Tempo: " << time << endl;
            exitArq<< endl;

            delete[] titles;
        }
    }
}