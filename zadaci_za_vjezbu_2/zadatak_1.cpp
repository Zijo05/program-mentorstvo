#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double broj;

    cout << "Unesite realan broj: ";
    cin >> broj;

    cout << "Kvadrat unesenog broja: " << pow(broj, 2);
    cout << "Korijen unesenog broja: " << sqrt(broj); 

    return 0;
}