#include <iostream>
#include <string>
#include <string>
#include <string>

using namespace std;

string reverse(const string &entier) {
    string reversed = entier;
    for (int i = 0; i < entier.length()/2 ; i++) {
        char temp = reversed[i];
        reversed[i] = reversed[entier.length() - i - 1];
        reversed[entier.length() - i - 1] = temp;
    }

    return reversed;
}

int main() {
    string entier;

    cout << "Longueur d'un entier N : " << endl;

    cout << "L'entier ? : " << endl;cin>>entier;

    entier = reverse(entier);

    cout << "Le nombre de chiffres est : " << entier << endl;

    return 0;
}