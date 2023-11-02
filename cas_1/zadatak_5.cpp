/*
Jedno jutro zemlje sadrži 4046.86 kvadratnih metara. Napisati program koji računa broj
jutara jedne parcele zemlje ako znamo da ta parcela zemlje ima 66741.344 kvadratnih
metara.
*/

#include <iostream>

using namespace std;


int main() {
    const double kvadratnih_metara_u_jutru = 4046.86;

    cout << "Broj jutara na parceli od 66741.344 kvadratnih metara ima " << 66741.344 / kvadratnih_metara_u_jutru << "jutara." << endl;

    return 0;
}