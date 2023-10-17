#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int Usop, Brook;
    cin >> Usop >> Brook;

    for (int i = 1; i <= Usop; i++)
    {
        for (int j = 1; j <= Brook; j++)
        {
            cout << i * j << " ";
        }
        cout << endl;
    }
    return 0;
}
