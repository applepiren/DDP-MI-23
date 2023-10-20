#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int y1, y2;
    cin >> y1 >> y2;
    int matriks[y1][y2];

    for (int i = 0; i < y1; i++)
    {
        for (int j = 0; j < y2; j++)
        {
            cin >> matriks[i][j];
        }
    }
    for (int i = y1 - 1; i >= 0; i--)
    {
        for (int j = y2 - 1; j >= 0; j--)
        {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}