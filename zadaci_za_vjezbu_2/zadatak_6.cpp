#include <iostream>

using namespace std;

int main() {
    char karakter;

    cout << "Unesite neki karakter: ";
    cin >> karakter;

    cout << "ASCII kod unesenog karaktera: " << int(karakter);

    return 0;
}