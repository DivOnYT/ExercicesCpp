#include <iostream>
#include <string>
#include <string>
#include <string>

using namespace std;


void triangleEntier(const int &entier) {
    for (int i = 1 ; i < entier+1 ; i++) {
        string message;
        for (int z = 1; z < i+1 ; z++) {
            message += to_string(i);
        }
        cout << message << endl;
    }
}


int main() {
    int entier=0;

    cout << "PGCD : " << endl;

    cout << "La couche du triangle d'entier ? " << endl;cin>>entier;

    triangleEntier(entier);

    return 0;
}