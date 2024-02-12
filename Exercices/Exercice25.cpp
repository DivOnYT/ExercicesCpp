#include <iostream>

using namespace std;

int main() {
    int tableau[8];

    int i=0;

    cout << "Tableaux 8 chiffres entier " << endl;
    do {
        cout << "Rentrez un nombre entier à mettre dans le tableau : " << endl;cin>>tableau[i];
        i++;
    } while (i < 8);

    cout << "Le tableau est " << endl; for (int z =0;z<8;z++ ){ cout << tableau[z]<< endl;}


    return 0;
}