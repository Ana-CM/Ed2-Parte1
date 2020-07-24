#include <iostream>
#include <fstream>
#include "cenarios/cenario1/cenario1.cpp"
#include "cenarios/cenario2/cenario2.cpp"
#include <string>

using namespace std;

int main()
{
    ifstream input("entrada.txt");
    int n, *vectorSize, n2= 6, vectorSizeCenario2[6] = {1000, 5000, 10000, 50000, 100000, 500000}; 

    //cenario1 chamada
    if (input.is_open())
    {
        input >> n;
        vectorSize = new int[n];
        for (int i = 0; i < n; i++){input >> vectorSize[i];} 

//      cenario1(n,vectorSize);
        input.close();
        delete[] vectorSize;

    } else cout << "Error opening file 'entrada.txt' ";


   //cenario 2 chamada
    cenario2(vectorSizeCenario2, n2);

    cout<< "fim" <<endl;

    return 0;
}