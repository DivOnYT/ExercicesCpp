#include <iostream>

using namespace std;

int main() {
    int nombre;
    cout << "Entrez un nombre :   "; cin >> nombre;
    if (nombre % 2 == 0) {
        cout << endl << "La valeur du nombre est paire";
    } else {
        cout << endl << "La valeur du nombre est impaire";
    }

    return 0;
}