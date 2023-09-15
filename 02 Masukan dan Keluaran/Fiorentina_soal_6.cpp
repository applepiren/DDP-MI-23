#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    int pembagian = A / B;
    int sisa_bagi = A % B;

    cout << "masing-masing " << pembagian << endl;
    cout << "bersisa " << sisa_bagi << endl;
    return 0;
}
