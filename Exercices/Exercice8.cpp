#include <iostream>

using namespace std;

int main() {
    float m;
    cout << "Valeur Absolue -->"<<endl;
    cout << "Entrez une valeur pour m :   " << endl; cin >> m;

    if (m < 0) {
        cout << "La valeur absolue est "<< -m<<endl;
    } else {
        cout << "La valeur absolue est "<< +m<<endl;
    }

    return 0;
}