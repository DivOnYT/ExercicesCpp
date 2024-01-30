#include <iostream>

using namespace std;

int main() {
    int a, b;

    int temp;

    cout << "Quelle valeur pour a " << endl; cin >> a;
    cout << "Quelle valeur pour b " << endl; cin >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "Valeur de a : " << a << endl << "Valeur de b : " << b << endl;

    cout << "Appuyez sur une touche pour continuer ..." << endl;
    cin.ignore();
    cin.get();

    return EXIT_SUCCESS;
}

