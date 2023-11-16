#include <iostream>

using namespace std;

int main() {
    double broj_ucenika;
    double broj_ucenica;

    cout << "Unesite broj ucenika: ";
    cin >> broj_ucenika;

    cout << "Unesite broj ucenica: ";
    cin >> broj_ucenica;
    
    double ukupan_broj_ucenika = broj_ucenika + broj_ucenica;

    cout << endl << "----------" << endl;
    cout << "*** Izvjestaj razreda ***" << endl;
    cout << "Ukupan broj ucenika i ucenica: " << ukupan_broj_ucenika << endl;
    cout << "Procenat ucenika: " << broj_ucenika * 100 / ukupan_broj_ucenika << endl;
    cout << "Procenat ucenica: " << broj_ucenica * 100 / ukupan_broj_ucenika << endl;
    cout << "Proporcija #ucenik:#ucenica: 1:" << broj_ucenica / broj_ucenika << endl;
    cout << "----------";

    return 0;
}