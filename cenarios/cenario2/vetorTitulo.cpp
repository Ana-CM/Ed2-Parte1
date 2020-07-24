#include "../cenario1/Dataset.hpp"
#include "../cenario1/leituraCenario1.h"
#include <string>
#include <chrono>
#include <bits/stdc++.h>
using namespace std;

void createVectorTitles(string *vectorTitle, int n)
{
    ifstream data("dataset.csv");
    string line, delimiter = "\",\"";
    int i=0;
    srand(std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count());
    
    if(data.is_open())
    {   
        getline(data,line); //exclui o risco do cabeçario da tabela cair dentro do if

        while(i < n) 
        {   
            if( data.eof())  //se o arquivo chegar ao fim antes do vetor estar cheio, volta para o inicio do arquivo
            {
                data.clear();
                data.seekg (0, ios::beg);
            }

            getline(data,line); 
            string title;
            for( int j = 0; j < 23; j++)
            {
                title = line.substr(0, line.find(delimiter));
                line.erase(0, line.find(delimiter) + delimiter.length());
            }

            if(title.length() != 0)
            {
                vectorTitle[i] = title;
                i++;
            }    
        }

    }else cout << "Error opening file 'dataset.csv' ";

    data.close();
    
    shuffle(vectorTitle, vectorTitle + n, default_random_engine(std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count()));
}