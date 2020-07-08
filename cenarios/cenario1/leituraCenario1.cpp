#include "leituraCenario1.h"
#include "Dataset.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
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
    ifstream data("../dataset.csv");
    Dataset *books = new Dataset[n];



    data.close();
    return books;
}
