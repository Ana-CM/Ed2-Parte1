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
    srand((unsigned)time(NULL));

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
    Dataset *book =  new Dataset[n];
    string authors, categories, edition, editionStatement, forAges, isbn10, isbn13, description, publisher, title, format, 
    illustrationsNote, imprint, indexDate, lang, publicationDate, url, bestsellersRank, id, publicationPlace, ratingCount, 
    dimensionZ, dimensionX, dimensionY, weight, ratingAvg, aux, empty = "0";
    int i = 0;
    srand(std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count());
    
    if(data.is_open())
    {
        getline(data, aux);

        while (i < n && !data.eof()) 
        {   
            getline(data, aux, '['); 
            getline(data, authors, ']'); 
            getline(data, aux, ','); 
            getline(data, bestsellersRank, ','); 
            getline(data, aux, '['); 
            getline(data, categories, ']');
            getline(data, aux, ','); 
            getline(data, aux, '"'); 
            getline(data, description, '"');
            getline(data, aux, ','); 
            getline(data, dimensionX, ',');
            getline(data, dimensionY, ','); 
            getline(data, dimensionZ, ',');
            getline(data, edition, ',');
            getline(data, editionStatement, ',');
            getline(data, forAges, ',');
            getline(data, format, ',');
            getline(data, id, ','); 
            getline(data, aux, '"'); 
            getline(data, illustrationsNote, '"'); 
            getline(data, aux, ','); 
            getline(data, imprint , ','); 
            getline(data, indexDate, ',');
            getline(data, isbn10, ',');
            getline(data, isbn13, ',');
            getline(data, lang, ',');
            getline(data, publicationDate, ',');
            getline(data, publicationPlace, ',');
            getline(data, ratingAvg, ',');
            getline(data, ratingCount, ',');
            getline(data, aux, '"'); 
            getline(data, title, '"'); 
            getline(data, aux, ','); 
            getline(data, url, ',');
            getline(data, weight, '\n');
            
           /* if (rand() % 17 == 0) {
                

                //removendo as "" dos valores q serão covertidos para o tipo int ou float
                // e substituindo os valores vazios por zero
                bestsellersRank.erase(remove(bestsellersRank.begin(), bestsellersRank.end(), '"'), bestsellersRank.end());
                bestsellersRank = bestsellersRank.empty()? empty : bestsellersRank ;
                publicationPlace.erase(remove(publicationPlace.begin(), publicationPlace.end(), '"'), publicationPlace.end());
                publicationPlace = publicationPlace.empty()? empty : publicationPlace ;
                ratingCount.erase(remove(ratingCount.begin(), ratingCount.end(), '"'), ratingCount.end());
                ratingCount = ratingCount.empty()? empty : ratingCount ;
                dimensionZ.erase(remove(dimensionZ.begin(), dimensionZ.end(), '"'), dimensionZ.end());
                dimensionZ = dimensionZ.empty()? empty : dimensionZ ;
                dimensionY.erase(remove(dimensionY.begin(), dimensionY.end(), '"'), dimensionY.end());
                dimensionY = dimensionY.empty()? empty : dimensionY ;
                dimensionX.erase(remove(dimensionX.begin(), dimensionX.end(), '"'), dimensionX.end());
                dimensionX = dimensionX.empty()? empty : dimensionX ;
                ratingAvg.erase(remove(ratingAvg.begin(), ratingAvg.end(), '"'), ratingAvg.end());
                ratingAvg = ratingAvg.empty()? empty : ratingAvg ;
                weight.erase(remove(weight.begin(), weight.end(), '"'), weight.end());
                weight = weight.empty()? empty : weight ;
                id.erase(remove(id.begin(), id.end(), '"'), id.end());
                id = id.empty()? empty : id ;

                book[i].setAuthors(authors);
                book[i].setCategories(categories);
                cout<< id<<endl;
                /*int
                book[i].setBestsellersRank(stol(bestsellersRank));
                book[i].setId(stoll(id));
                book[i].setPublicationPlace(stol( publicationPlace));
                book[i].setRatingCount(stol( ratingCount));

                book[i].setDescription(description);
                book[i].setEdition(edition);
                book[i].setEditionStatement(editionStatement);
                book[i].setForAges(forAges);
                book[i].setIsbn10(isbn10);
                book[i].setIsbn13(isbn13);
                book[i].setPublisher(publisher);
                book[i].setTitle(title);
                book[i].setFormat(format);
                book[i].setIllustrationsNote(illustrationsNote);
                book[i].setImprint(imprint);
                book[i].setIndexDate(indexDate);
                book[i].setLang(lang);
                book[i].setPublicationDate(publicationDate);
                book[i].setUrl(url);
                //float
                book[i].setDimensionZ(stof( dimensionZ ));
                book[i].setDimensionY(stof( dimensionY));
                book[i].setDimensionX(stof( dimensionX));
                book[i].setWeight(stof( weight));
                book[i].setRatingAvg(stof(ratingAvg));
                
                i++;
                
            }*/
            
        }
        
    }else cout << "Error opening file 'dataset.csv' ";

    data.close();

    shuffle(book, book + n, default_random_engine(std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count()));
    
    return book;
}
