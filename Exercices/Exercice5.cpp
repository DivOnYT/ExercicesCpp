#include <iostream>

using namespace std;

int main() {
    float nombre1;
    float nombre2;
    float nombre3;
    cout << "Entrez un premier nombre :   " << endl; cin >> nombre1;
    cout << "Entrez un deuxième nombre :   " << endl; cin >> nombre2;
    cout << "Entrez un troisième nombre :   " << endl; cin >> nombre3;

    float max = nombre1;

    if (nombre2 > max) {
        max = nombre2;
    }
    if (nombre3 > max) {
        max = nombre3;
    }

    cout << "Le plus grand nombre est : " << max;

    return 0;
}