#include <iostream>

using namespace std;


int pairsNumber(const int &pairs, int now=0) {
    if (pairs == now) {
        if (pairs%2 == 0) {
            return 1;
        } else {
            return 0;
        }
    }else {
        if (now%2 == 0) {
            return 1 + pairsNumber(pairs, now+1);
        } else {
            return 0 + pairsNumber(pairs, now+1);
        }
    }
}


int main() {
    float tableau[10];
    int value=0;

    cout << "Nombre de nombres pairs : " << endl;

    cout << "Quelle est le nombre dont vous aimeriez savoir le nombre de pair entre 0 et N ? " << endl;cin>>value;

    int pairs = pairsNumber(value);

    cout << "Le nombre de paires est " << pairs << endl;

    return 0;
}