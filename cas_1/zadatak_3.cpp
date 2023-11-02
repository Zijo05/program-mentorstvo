/*
Pretpostavimo da nivo okeana trenutno raste svake godine za 1.5 milimetara. Napisati
program koji ispisuje

a) Koliko milimetara će okean biti viši za 5 godina
b) Koliko milimetara će okean biti viši za 7 godina
c) Koliko milimetara će okean biti viši za 126 mjeseci
d) Koliko milimetara je okean bio niži prije 2 godine (izraziti u negativnim
vrijednostima)
*/

#include <iostream>

using namespace std;


int main() {
    const double stopa_rasta = 1.5;


    cout << "Za 5 godina okean će biti viši za " << stopa_rasta * 5 << " milimetara" << endl;
    cout << "Za 5 godina okean će biti viši za " << stopa_rasta * 7 << " milimetara" << endl;
    cout << "Za 5 godina okean će biti viši za " << stopa_rasta * 126 / 12 << " milimetara" << endl;  // jer ima 12 mjeseci u godini -- 126 / 12 = 10.5 godina
    cout << "Za 5 godina okean će biti viši za " << stopa_rasta * -2 << " milimetara" << endl;
    
    return 0;
}