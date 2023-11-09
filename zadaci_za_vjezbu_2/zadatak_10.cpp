#include <iostream>
#include <cmath>

using namespace std;

double const PI = 3.14159;

int main() {
    double radius;

    cout << "Unesite radius lopte: ";
    cin >> radius;

    cout << "Povrsina lopte: " << 4 * PI * pow(radius, 2);
    cout << "Volumen lopte: " << 4 / 3 * PI * pow(radius, 3);

    return 0;
}