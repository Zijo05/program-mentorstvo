#include <iostream>

using namespace std;

int main() {
    unsigned int broj_1;
    unsigned int broj_2;
    unsigned int broj_3;
    char prefix;

    cout << "Unesite broj 1: ";
    cin >> broj_1;

    cout << "Unesite broj 2: ";
    cin >> broj_2;

    cout << "Unesite broj 3: ";
    cin >> broj_3;

    cout << "Unesite prefix: ";
    cin >> prefix;

    unsigned int broj_4 = broj_1 + broj_3;

    cout << broj_4 << " + " << broj_2 << " = " << prefix << broj_4 + broj_2 << endl;
    cout << broj_4 << " - " << broj_2 << " = " << prefix << broj_4 - broj_2 << endl;
    cout << broj_4 << " * " << broj_2 << " = " << prefix << broj_4 * broj_2 << endl;
    cout << broj_4 << " c/ " << broj_2 << " = " << prefix << broj_4 / broj_2 << endl;
    cout << broj_4 << " / " << broj_2 << " = " << prefix << double(broj_4) / broj_2 << endl;
    cout << broj_4 << " % " << broj_2 << " = " << prefix << broj_4 % broj_2 << endl;

    return 0;
}