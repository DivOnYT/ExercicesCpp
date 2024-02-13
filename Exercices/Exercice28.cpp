#include <iostream>

using namespace std;


template <typename T, int N>
int nbOccurences(const T (&tableau)[N], const T &value) {
    int nb_occurences=0;
    for (int i=0; i < N; i++) {
        if (tableau[i] == value) {
            nb_occurences++;
        }
    }
    return nb_occurences;
}

int main() {
    float tableau[10];

    int i=0;
    float value;

    cout << "Nb Occurences dans un tableau : " << endl;
    do {
        cout << "Rentrez la " << i+1 << "ieme valeur à mettre dans le tableau : " << endl;cin>>tableau[i];
        i++;
    } while (i < 10);

    cout << "Quelle est la valeur dont vous voulez compter le nombre d'occurences dans le tableau ? : " << endl;cin>>value;

    int b = nbOccurences(tableau, value);

    cout << "Le nombre d'occurences du " << value << " dans le tableau est " << b << endl;


    return 0;
}