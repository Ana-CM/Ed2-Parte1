#include <iostream>
#include <fstream>
#include "cenarios/cenario1/cenario1.cpp"
#include <string>

using namespace std;

int main()
{
    ifstream input("entrada.txt");
    int n, *vectorSize; 

    if (input.is_open())
    {
        input >> n;
        vectorSize = new int[n];

        for (int i = 0; i < n; i++){input >> vectorSize[i];} 

        cenario1(n,vectorSize);

        input.close();

    } else cout << "Error opening file 'entrada.txt' ";

    return 0;
}