#include <iostream>

using namespace std;

int main() {
    float note;
    cout << "Entrez une note :   " << endl; cin >> note;

    if (note > 10) {
        cout << "Note Validée"<<endl;
    } else {
        cout << "Note Non Validée"<<endl;
    }

    return 0;
}