#include "../cenario1/Dataset.hpp"
#include "../cenario1/leituraCenario1.h"
#include <string>
using namespace std;

void createVectorTitles(string *vectorTitle, int n)
{
     Dataset *books =  new Dataset[n];
 
     createObject(n, books);

     for (int i = 0; i < n; i++)
     {
         vectorTitle[i] = books->getTitle();
     }
     
    delete[] books;

}