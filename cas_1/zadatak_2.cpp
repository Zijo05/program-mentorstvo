/*
Odjel prodaje u Bosni i Hercegovini generiše 23 posto ukupne prodaje kompanije Ljuta
Paprika. Na osnovu ovih informacija, napisati program koji će predvidjeti koliko će
kompanija Ljuta Paprika ostvariti očekivani promet u Bosni i Hercegovini ako će imati
$2.3 miliona očekivane prodaje ove godine.
*/

#include <iostream>

using namespace std;


int main() {
    int ocekivana_prodaja = 2300000;

    double ocekivani_promet_bih = ocekivana_prodaja * .23;

    cout << "Ostvareni ocekivani promet u Bosni i Hercegovini: " << ocekivani_promet_bih;

    return 0;
}