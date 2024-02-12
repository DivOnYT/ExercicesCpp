#include <iostream>

using namespace std;

int main() {
    float m;
    float n;
    cout << "Entrez une valeur pour m :   " << endl; cin >> m;
    cout << "Entrez une valeur pour n :   " << endl; cin >> n;

    float produit = m*n;

    if (produit < 0) {
        cout << "Le produit est négatif"<<endl;
    } else if (produit > 0) {
        cout << "Le produit est positif"<<endl;
    } else {
        cout << "Le produit est nul"<<endl;
    }

    return 0;
}