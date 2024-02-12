#include <iostream>

using namespace std;

int main() {
    int n=0;
    int s(0);

    cout << "Entrez un nombre duquel on fera la somme en partant de 1 à n : " << endl;cin>>n;

    for (int i(0);i<n+1;i++) {
        s += i;
    }

    cout << "La somme est : " << s << endl;

    return 0;
}