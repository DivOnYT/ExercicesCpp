#include <iostream>

using namespace std;

int main() {
    float age;
    string categorie;

    cout << "Categorie en fonction d'age -->"<<endl;
    cout << "Entrez votre age  :  " << endl; cin >> age;

    if (6 <= age <= 7) {
        categorie = "poussin";
    } else if (8 <= age <= 9) {
        categorie = "pupille";
    } else if (10 <= age <= 11) {
        categorie = "minime";
    } else if (age >= 12) {
        categorie = "cadet";
    }

    cout << "La categorie d'age " << age << " ans est " << categorie << endl;

    return 0;
}