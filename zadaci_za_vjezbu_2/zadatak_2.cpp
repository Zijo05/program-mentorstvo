#include <iostream>
#include <cmath>

using namespace std;

double const PI = 3.14159;

int main() {
    double radius;

    cout << "Unesite radius kruga: ";
    cin >> radius;

    cout << "Povrsina kruga: " << PI * pow(radius, 2);

    return 0;
}