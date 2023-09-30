#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    char nilai;
    cin >> nilai;

    if (nilai == 'A')
    {
        cout << "Nilai kamu 100" << endl;
    }
    else if (nilai == 'B')
    {
        cout << "Nilai kamu 76 - 99" << endl;
    }
    else if (nilai == 'C')
    {
        cout << "Nilai kamu dibawah 76 :(" << endl;
    }
    else
    {
        cout << "Nilai Invalid" << endl;
    }

    return 0;
}
