#include <iostream>

using namespace std;

int main() {
    int note;
    double moyenne;

    cout << "Quel est le nombre 1 : " << endl; cin >> note; moyenne=moyenne+note;
    cout << "Quel est le nombre 2 : " << endl; cin >> note; moyenne=moyenne+note;
    cout << "Quel est le nombre 3 : " << endl; cin >> note; moyenne=moyenne+note;
    cout << "Quel est le nombre 4 : " << endl; cin >> note; moyenne=moyenne+note;
    cout << "Quel est le nombre 5 : " << endl; cin >> note; moyenne=moyenne+note;

    moyenne = moyenne/5.0;

    cout << moyenne;

    cin.ignore();

    return EXIT_SUCCESS;
}

