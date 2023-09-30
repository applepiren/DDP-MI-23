#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int n;

    cin >> n;

    if (n >= 0 && n <= 5)
    {
        cout << "Satuan" << endl;
    }
    else if (n >= 10 && n <= 99)
    {
        cout << "Puluhan" << endl;
    }
    else if (n >= 100 && n <= 999)
    {
        cout << "Ratusan" << endl;
    }
    else
    {
        cout << "Tidak Tahu" << endl;
    }
    return 0;
}
