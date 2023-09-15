#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int penjumlahan = a + b;
    int pengurangan = a - b;
    int perkalian = a * b;
    float pembagian = (float)a / b;

    cout << "Hasil dari Penjumlahan " << a << " dengan " << b << " adalah " << penjumlahan << endl;
    cout << "Hasil dari Pengurangan " << a << " dengan " << b << " adalah " << pengurangan << endl;
    cout << "Hasil dari Perkalian " << a << " dengan " << b << " adalah " << perkalian << endl;
    cout << "Hasil dari Pembagian " << a << " dengan " << b << " adalah " << pembagian << endl;

    return 0;
}
