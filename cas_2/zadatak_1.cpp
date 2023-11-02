/*
Unesi dva broja s decimalnim mjestima i izračunaj njihov polu zbir.
*/

#include <iostream>

using namespace std;

int main() {
    double x;
    double y;

    cin >> x >> y;

    double poluzbir;
    poluzbir = (x + y) / 2;

    cout << "Poluzbir dva broja: " << poluzbir;

    return 0;
}