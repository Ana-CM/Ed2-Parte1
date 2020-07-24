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
    long long int copies, totalCopies, comparisons, totalComparisons;
    double time, totalTime;

    exitArq<< endl;
    exitArq<< "Analise dos vetores" << endl;
    for (int j=0; j < n ; j++ )
    {   
        exitArq<< "vetores de tamanho " << vectorSize[j] <<endl;

        //QuickSort 
       /* totalCopies = 0; totalComparisons = 0; totalTime = 0;
        for (int i = 0; i < 5; i++)
        {
            string* titles = new string[vectorSize[j]];
            createVectorTitles(titles, vectorSize[j]) ;
            time = 0; copies = 0; comparisons = 0;

            //func

            totalCopies = totalCopies + copies; 
            totalComparisons =  totalComparisons + comparisons; 
            totalTime = totalTime + time;
            delete[] titles;
        }
        exitArq<< "QuickSort " <<endl; 
        exitArq<< "Cópias (valor médio): " << totalCopies/5 << endl;
        exitArq<< "Comparações (valor médio): " << totalComparisons/5 << endl;
        exitArq<< "Tempo (valor médio): " << totalTime/5 << endl;
        exitArq<< endl;

        //QuickSort Mediana
        totalCopies = 0; totalComparisons = 0; totalTime = 0;
        for (int i = 0; i < 5; i++)
        {
            string* titles = new string[vectorSize[j]];
            createVectorTitles(titles, vectorSize[j]) ;
            time = 0; copies = 0; comparisons = 0;

            //func

            totalCopies = totalCopies + copies; 
            totalComparisons =  totalComparisons + comparisons; 
            totalTime = totalTime + time;
            delete[] titles;
        }
        exitArq<< "QuickSort Mediana" <<endl; 
        exitArq<< "Cópias (valor médio): " << totalCopies/5 << endl;
        exitArq<< "Comparações (valor médio): " << totalComparisons/5 << endl;
        exitArq<< "Tempo (valor médio): " << totalTime/5 << endl;
        exitArq<< endl; */
        

        //QuickSort Inserção
        totalCopies = 0; totalComparisons = 0; totalTime = 0;
        for (int i = 0; i < 5; i++)
        {
            string* titles = new string[vectorSize[j]];
            createVectorTitles(titles, vectorSize[j]) ;
            time = 0; copies = 0; comparisons = 0;

            quicksortInsercao(titles, vectorSize[j], &time, &comparisons, &copies);

            totalCopies = totalCopies + copies; 
            totalComparisons =  totalComparisons + comparisons; 
            totalTime = totalTime + time;
            delete[] titles;
        }
        exitArq<< "QuickSort Inserção" <<endl; 
        exitArq<< "Cópias (valor médio): " << totalCopies/5 << endl;
        exitArq<< "Comparações (valor médio): " << totalComparisons/5 << endl;
        exitArq<< "Tempo (valor médio): " << totalTime/5 << endl;
        exitArq<< endl;
    }
}
