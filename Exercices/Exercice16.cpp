#include <iostream>

using namespace std;

int main() {
    int i = 1 ;
    int n=0;
    int s(0);

    cout << "Entrez un nombre duquel on fera la somme en partant de 1 à n : " << endl;cin>>n;
    while (i<n+1) {
        s += i;
        i++;
    }

    cout << "Somme : " << s << endl;

    return 0;
}