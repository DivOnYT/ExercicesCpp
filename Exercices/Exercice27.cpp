#include <iostream>

using namespace std;


template <typename T, int N>
float maxTableau(const T (&tableau)[N]) {
    float max=0;
    for (int i=0; i < N; i++) {
        if (max < tableau[i]) {
            max = tableau[i];
        }
    }
    return max;
}

int main() {
    float max[10];

    int i=0;

    cout << "Max dans un tableau : " << endl;
    do {
        cout << "Rentrez la " << i+1 << "ieme valeur à mettre dans le tableau : " << endl;cin>>max[i];
        i++;
    } while (i < 10);

    float b = maxTableau(max);

    cout << "Le maximum dans le tableau est " << b << endl;


    return 0;
}