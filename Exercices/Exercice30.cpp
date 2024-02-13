#include <iostream>

using namespace std;


template <typename T>
float factorielle(const T (&factor), T now=1) {
    if (factor == now) {
        return factor;
    } else {
        return now * factorielle(factor, now+1);
    }
}


int main() {
    float tableau[10];
    float value=0;

    cout << "Calcul de Factorielle : " << endl;

    cout << "Quelle est la factiorelle que vous aimeriez calculer ? " << endl;cin>>value;

    float factor = factorielle(value);

    cout << "La factorielle de " << value << " est " << factor << endl;

    return 0;
}