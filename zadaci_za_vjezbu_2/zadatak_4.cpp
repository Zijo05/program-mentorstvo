#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double kateta1;
    double kateta2;

    cout << "Unesite dvije katete pravouglog trougla: ";
    cin >> kateta1 >> kateta2;

    cout << "Duzina hipotenuze: " << sqrt( pow(kateta1, 2) + pow(kateta2, 2) );

    return 0;
}