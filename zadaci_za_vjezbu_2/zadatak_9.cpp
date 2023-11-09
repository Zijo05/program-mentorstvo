#include <iostream>

using namespace std;

int main() {
    double celsius;

    cout << "Unesite temperaturu u stepenima Celzijusa: ";
    cin >> celsius;

    cout << "Unesena temperatura u stepenima Farenhajta: " << 5 / 9 * celsius + 32;

    return 0;
}