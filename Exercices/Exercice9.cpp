#include <iostream>

using namespace std;

int main() {
    float note1;
    float note2;
    float note3;

    cout << "Valeur Absolue -->"<<endl;
    cout << "Entrez une valeur la première note :   " << endl; cin >> note1;
    cout << "Entrez une valeur pour la deuxième note :   " << endl; cin >> note2;
    cout << "Entrez une valeur pour la troisième note :   " << endl; cin >> note3;

    float moyenne = (note1+note2+note3)/3;

    cout << "Bravo vous avez " << moyenne << " de moyenne " << endl;

    return 0;
}