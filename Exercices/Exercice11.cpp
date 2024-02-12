#include <iostream>

using namespace std;

int main() {
    float photocopies;
    float prix;

    cout << "Centre de Photocopies -->"<<endl;
    cout << "Entrez un nombre de photocopies effectuées  :  " << endl; cin >> photocopies;

    if (photocopies <= 10) {
        prix = 0.25;
    } else if (photocopies <= 20) {
        prix = 0.20;
    } else {
        prix = 0.10;
    }

    cout << "Le prix pour " << photocopies << " photocopies est de " << prix << " DH " << endl;

    return 0;
}