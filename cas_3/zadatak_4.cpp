#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double const PI = 3.14159;
    double a;
    double b;

    cout << "Unesite a: ";
    cin >> a;

    cout << "Unesite b: ";
    cin >> b;

    cout << "Povrsina: " << PI * a * b << endl;
    cout << "Aproksimacija obima: " << PI * ( 3 * (a + b) - sqrt( (3 * a + b) * (a + 3 * b) ) );

    return 0;
}