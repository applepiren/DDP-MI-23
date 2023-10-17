#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string nami;
    cout << "";
    getline(cin, nami);

    for (int i = nami.length() - 1; i >= 0; i--)
    {
        cout << nami[i];
    }
    cout << endl;

    return 0;
}
