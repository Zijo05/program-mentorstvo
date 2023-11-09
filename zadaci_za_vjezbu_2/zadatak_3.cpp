#include <iostream>

using namespace std;

int main() {
    string ime_prezime;

    cout << "Unesite vase ime i prezime: ";
    getline(cin, ime_prezime);

    cout << "Dobrodosao/la " << ime_prezime << "!";

    return 0;
}