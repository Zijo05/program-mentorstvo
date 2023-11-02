/*
Auto sadrži 50 litara benzina i može putovati 825km prije nego je potrebno natočiti
gorivo. Napisati program koji računa koliko litara auto potroši na 100km. Prikazati
rezultat na ekranu.
*/

#include <iostream>

using namespace std;


int main() {
    double potrosnja_po_km = 50.0 / 825.0;

    cout << "Potrosnja na 100 km: " << potrosnja_po_km * 100 << " L";

    return 0;
}