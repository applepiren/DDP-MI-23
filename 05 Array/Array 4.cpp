#include <iostream>
using namespace std;

int main()
{
    int matriks[100][100];
    int jum_baris, jum_kolom, i, j;

    cout << "Input jumlah beris matriks: ";
    cin >> jum_baris;

    cout << "Input jumlah kolom matriks: ";
    cin >> jum_kolom;
    cout << endl;

    for (i = 0; i < jum_baris; i++)
    {
        for (j = 0; j < jum_kolom; j++)
        {
            cout << "Baris " << i << ", kolom " << j << "=";
            cin >> matriks[i][j];
        }
        cout << endl;
    }
    cout << "Hasil matriks : " << endl;

    for (i = 0; i < jum_baris; i++)
    {
        for (j = 0; j < jum_kolom; j++)
        {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
}