#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int r;
    cin >> r;
    getchar();

    string arr[r];

    for (int i = 0; i < r; i++)
    {
        getline(cin, arr[i]);
    }
    for (int i = r - 1; i >= 0; i--)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
