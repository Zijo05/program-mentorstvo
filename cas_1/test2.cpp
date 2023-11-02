#include <iostream>

using namespace std;


int main() {
    double suma = 0;
    double broj = 0;
    int broj_brojeva = 0;

    while(broj != 4 * 3) {
        cin >> broj;
        suma += broj;
        broj_brojeva++;
    }

    broj_brojeva--;
    suma -= broj;

    cout << "Broj unesenih brojeva: " << broj_brojeva << endl;
    cout << "Suma brojeva je: " << suma;

    return 0;
}

