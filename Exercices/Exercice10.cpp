#include <iostream>

using namespace std;

int main() {
    float ht;
    float reduc = 0.15;
    float taxes = 0.2;
    float ttc = 0;

    cout << "PRix HT -> TTC -->"<<endl;
    cout << "Entrez une valeur du  prix HT  :  " << endl; cin >> ht;

    cout << "Application de la réduction de 15%"<<endl;

    ttc = ht - ht*reduc;

    cout << "Application de la taxe sur le prix"<<endl;

    ttc = ttc - ttc*taxes;

    cout << "Votre Prix TTC est de " << ttc << " $ " << endl;

    return 0;
}