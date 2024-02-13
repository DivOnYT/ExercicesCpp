#include <iostream>

using namespace std;


int impairSum(const int &impairs, int now=1) {
    if (impairs == now) {
        if (impairs%2 == 0) {
            return 0;
        } else {
            return now;
        }
    }else {
        if (now%2 == 0) {
            return 0 + impairSum(impairs, now+1);
        } else {
            return now + impairSum(impairs, now+1);
        }
    }
}


int main() {
    float tableau[10];
    int value=0;

    cout << "Nombre de nombres pairs : " << endl;

    cout << "Quelle est le nombre dont vous aimeriez savoir la somme des nombres impairs entre 0 et N ? " << endl;cin>>value;

    int sum = impairSum(value);

    cout << "La seomme des impairs est de " << sum << endl;

    return 0;
}