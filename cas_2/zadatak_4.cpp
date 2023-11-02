/*
Kompanija gaziranih pića je nedavno uradila anketu nad 16,500 kupaca i saznalo da
otprilike 15% od ispitanika su kupovali jedno ili više gaziranih pića sedmično. Od tih
ispitanika koji kupuju gazirana pića, oko 58% od njih više preferiraju citrusna gazirana
pića. Napisati program koji prikazuje sljedeće

a) Aproksimativan broj kupaca u anketi koji kupuju jedno ili više gaziranih pića sedmično
b) Aproksimativan broj kupaca u anketi koji preferiraju citrusna gazirana pića
*/

#include <iostream>

using namespace std;

int main() {
    double aproxGazirana;
    double aproxCitrusna;

    aproxGazirana = 16500 * 0.15;
    aproxCitrusna = aproxGazirana * 0.58;

    cout << "Prosjecan broj kupaca koji kupuju gazirana pica: " << aproxGazirana << endl;

    cout << "Prosjecan broj kupaca koji preferiraju citrusna pica: " << aproxCitrusna;

    return 0;
}