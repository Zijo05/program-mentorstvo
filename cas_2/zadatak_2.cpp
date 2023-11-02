/*
Napisati program koji traži unos stranica trougla, a zatim računa povrsinu i obim trougla.
(trougao je pravougli i stranice se unose tako da se unesu prvo dvije katete a zatim hipotenuza)
*/

// P = kateta1 * kateta2 / 2;

#include <iostream>

using namespace std;

int main() {
    double kateta1;
    double kateta2;
    double hipotenuza;
    
    cout << "Unesite prvu katetu: ";
    cin >> kateta1;
    cout << "Unesite drugu katetu: "; 
    cin >> kateta2;
    cout << "Unesite hipotenuzu: ";
    cin >> hipotenuza;

    double povrsina = kateta1 * kateta2 / 2;
    double obim = kateta1 + kateta2 + hipotenuza;

    cout << "Povrsina je: " << povrsina << endl;

    cout << "Obim je: " << obim;

    return 0;
}