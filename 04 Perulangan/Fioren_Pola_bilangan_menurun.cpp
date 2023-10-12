#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int X, Y, Z;
    cin >> X >> Y >> Z;

    for (int i = X; i >= Y; i += Z)
    {
        cout << i << " ";
    }
    return 0;
}
