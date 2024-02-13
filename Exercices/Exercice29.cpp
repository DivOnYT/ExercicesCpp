#include <iostream>

using namespace std;


template <typename T, size_t N>
void triInsertion(T (&tableau)[N]){
    for (size_t i=0;i<N-1;i++) {
        T elementCourant = tableau[i];

        int j = i - 1;
        while (j >= 0 and tableau[j]>elementCourant) {
            tableau[j+1] = tableau[j];
            j--;
        }
        tableau[j+1] = elementCourant;
    }
}

template <typename T, size_t N>
void triSelection(T (&tableau)[N]){
    for (size_t i = 0; i < N - 1; i++) {
        size_t min = i;
        for (size_t z = i + 1; z < N; z++) {
            if (tableau[z] < tableau[min]) {
                min = z;
            }
        }
        if (min != i) {
            swap(tableau[min], tableau[i]);
        }
    }
}

template <typename T, size_t N>
void afficherTableau(const T (&tableau)[N]) {
    for (size_t i = 0; i < N; i++) {
        cout << tableau[i] << " ";
    }
    cout << endl;
}

int main() {
    float tableau[10];

    int i=0;

    cout << "Tris par séléction et insertion : " << endl;
    do {
        cout << "Rentrez la " << i+1 << "ieme valeur à mettre dans le tableau : " << endl;cin>>tableau[i];
        i++;
    } while (i < 10);

    triSelection(tableau);

    cout << "Le tableau trié est  ";
    afficherTableau(tableau);

    return 0;
}