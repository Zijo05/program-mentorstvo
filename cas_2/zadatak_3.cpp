/*
Napisati program koji traži unos koeficjenata kvadratne jednačine 
po redu: kvadratni, linearni i slobdni član. 
Nakon toga računa i ispisuje jedno rješenje kvadratne jednačine.
*/


#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a;
    double b;
    double c;

    cin >> a;
    cin >> b;
    cin >> c;

    
    double x = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);  // Ako je diskriminanta manja od 0, ispis x će biti nan  -- to znači da rješenja nisu realna
    cout << x;

    return 0;
}