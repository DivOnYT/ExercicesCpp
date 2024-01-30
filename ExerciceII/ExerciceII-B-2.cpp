#include <iostream>

using namespace std;

int main() {
    int largeur, longueur;
    cout << "Quelle est la largeur d'un champ : " << endl;
    cin >> largeur;
    cout << "Vous avez choisi un champ de " << largeur << endl;
    cout << "Quelle est la longueur du champ : " << endl;
    cin >> longueur;
    cout << "Vous avez séléctionné un champ de " << longueur << endl;
    cout << "Le Périmètre du champ est : " << 2*largeur+2*longueur << endl;
    cout << "L'Aire du champ est : " << largeur*longueur << endl;

    return EXIT_SUCCESS;
}

