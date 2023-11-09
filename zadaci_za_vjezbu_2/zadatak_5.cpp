#include <iostream>

using namespace std;

int main() {
    double broj1;
    double broj2;
    double broj3;

    cout << "Unesite tri realna broja: ";
    cin >> broj1 >> broj2 >> broj3;

    cout << "Srednja vrijednost unesenih brojeva: " << (broj1 + broj2 + broj3) / 3;

    return 0;
}