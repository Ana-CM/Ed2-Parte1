#include "leituraCenario1.h"
#include "Dataset.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <chrono>
#include <bits/stdc++.h>
using namespace std;

string* createVector(int n)
{
    ifstream data("dataset.csv");
    string *books =  new string[n];
    string line;
    vector<string> lines;
    int total_lines=0, i=0;
    srand(std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count());

    if(data.is_open())
    {
        while(getline(data,line))
        {
            total_lines++; 
            lines.push_back(line);  
        }

        while (i < n) 
        {   
            int random_number=rand()%total_lines; 
            books[i] = lines[random_number];
            i++;
        }
    }else cout << "Error opening file 'dataset.csv' ";

    data.close();
    return books;
}

Dataset* createObject(int n)
{
    ifstream data("dataset.csv");
    Dataset *books =  new Dataset[n];
    string line, delimiter = "\",\"", empty = "0";
    int i=0;
    srand(std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count());
    
    if(data.is_open())
    {   
        getline(data,line); //exclui o risco do cabeçario da tabela cair dentro do if

        while( !data.eof() && i < n)
        {   
            getline(data,line); 

            if(rand() % 17 == 0)
            {   
                string book[25];
                for( int j = 0; j < 25; j++)
                {
                    if (j != 24)
                    {
                        book[j] = line.substr(0, line.find(delimiter));
                        book[j] = book[j].empty()? empty : book[j] ;
                        line.erase(0, line.find(delimiter) + delimiter.length());
                    }
                    else
                    {
                        line.pop_back();
                        book[24] = line;
                        book[24] = book[24].empty()? empty : book[24];
                    }
                }

                books[i].setAuthors(book[0].erase(0, 1));
                books[i].setBestsellersRank(book[1]);
                books[i].setCategories(book[2]);
                books[i].setDescription(book[3]);
                books[i].setDimensionX(stof(book[4]));
                books[i].setDimensionY(stof(book[5]));
                books[i].setDimensionZ(stof(book[6]));
                books[i].setEdition(book[7]);
                books[i].setEditionStatement(book[8]);
                books[i].setForAges(book[9]);
                books[i].setFormat(book[10]);
                books[i].setId(stoll(book[11]));
                books[i].setIllustrationsNote(book[12]);
                books[i].setImprint(book[13]);
                books[i].setIndexDate(book[14]);
                books[i].setIsbn10(book[15]);
                books[i].setIsbn13(book[16]);
                books[i].setLang(book[17]);
                books[i].setPublicationDate(book[18]);
                books[i].setPublicationPlace(stoll(book[19]));
                books[i].setRatingAvg(stof(book[20]));
                books[i].setRatingCount(stoll(book[21]));
                books[i].setTitle(book[22]);
                books[i].setUrl(book[23]);
                books[i].setWeight(stof(book[24]));
 
                i++;
            }
        }

    }else cout << "Error opening file 'dataset.csv' ";

    data.close();
    
    shuffle(books, books + n, default_random_engine(std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count()));
    
    return books;
}
