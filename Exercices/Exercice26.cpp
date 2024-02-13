#include <iostream>

using namespace std;


template <typename T, int N>
int tailleTableau(const T (&tableau)[N]) {
    return N;
}

int main() {
    float notes[10];

    int i=0;
    float s(0);

    cout << "Moyenne de 10 notes" << endl;
    do {
        cout << "Rentrez la " << i+1 << "ieme note à mettre dans le tableau : " << endl;cin>>notes[i];
        i++;
    } while (i < 10);

    for (float note : notes){
        s+=note;
    }

    int b = tailleTableau(notes);

    cout << "La moyenne des notes est " << s/b << endl;


    return 0;
}