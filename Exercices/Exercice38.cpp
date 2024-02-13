#include <iostream>
#include <string>
#include <string>
#include <string>

using namespace std;

template <typename T, size_t N>
int pairsNumber(const T (&pairs)[N]) {
    int count = 0;
    for (size_t i = 0; i < N ; i++) {
        if (pairs[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

template <typename T, int N>
int tailleTableau(const T (&tableau)[N]) {
    return N;
}

int main() {
    int tableau[10];
    int i =0;

    cout << "Pyramide d'une taille N : " << endl;

    do {
        cout << "Rentrez la " << i+1 << "ieme valeur à mettre dans le tableau : " << endl;cin>>tableau[i];
        i++;
    } while (i < 10);

    int pairs = pairsNumber(tableau);
    int impairs = tailleTableau(tableau)-pairs;

    cout << "Les nombres sont : impairs : " << impairs << " pairs : " << pairs << endl;

    return 0;
}