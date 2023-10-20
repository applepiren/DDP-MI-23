#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int wibu;
    cin >> wibu;

    if (wibu < 0)
    {
        cout << "Negatif" << endl;
    }
    else if (wibu % 2 == 0)
    {
        cout << "Positif Genap" << endl;
    }
    else if (wibu % 2 == 1)
    {
        cout << "Positif Ganjil" << endl;
    }

    return 0;
}
