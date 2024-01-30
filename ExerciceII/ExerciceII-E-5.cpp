#include <iostream>

using namespace std;

int main() {
    double ht, kg, tva;

    cout << "Quelle valeur pour 1kg de tomates hors taxes : " << endl; cin >> ht;
    cout << "Combien de kg achetés : " << endl; cin >> kg;
    cout << "Quel est le taux de taxes (tva) en %: " << endl; cin >> tva;

    ht = (ht*kg)-(ht*kg)*(tva/100);

    cout << "Le prix TTC de " << kg << " kilos de Tomates est : " << ht << endl;

    cout << "Appuyez sur une touche pour continuer ..." << endl;
    cin.ignore();
    cin.get();

    return EXIT_SUCCESS;
}

