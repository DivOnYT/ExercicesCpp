#include <iostream>
#include <string>
#include <string>
#include <string>

using namespace std;


void pyramide(const int &entier) {
    for(int i=0;i<entier;i++){
        for(int j=1;j<=(entier*2)-1;j++){
            if (j>=entier-i && j<= entier+i )
                cout<<"*";
            else   cout<<" ";
        }
        cout<<"\n";
    }
}


int main() {
    int entier;

    cout << "Pyramide d'une taille N : " << endl;

    cout << "La taille de la pyramide : " << endl;cin>>entier;

    pyramide(entier);

    return 0;
}