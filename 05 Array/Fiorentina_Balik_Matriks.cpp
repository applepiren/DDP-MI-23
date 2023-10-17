#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int boa, robbin;
    cin >> boa >> robbin;
    int matriks[boa][robbin];

    for (int i = 0; i < boa; i++)
    {
        for (int j = 0; j < robbin; j++)
        {
            cin >> matriks[i][j];
        }
    }
    for (int i = boa - 1; i >= 0; i--)
    {
        for (int j = robbin - 1; j >= 0; j--)
        {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
