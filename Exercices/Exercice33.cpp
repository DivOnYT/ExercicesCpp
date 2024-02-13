#include <iostream>

using namespace std;


int pgcd(const int &m, const int &n) {
    int min(0);
    int max(0);

    if (m>n) {
        min = n;
        max = m;
    } else {
        min = m;
        max = n;
    }

    int t = 1;
    for (int i=1; i < min ; i++) {
        if (min%i == 0 and max%i == 0) {
            t = i;
        }
    }
    return t;
}


int main() {
    float tableau[10];
    int m=0;
    int n=0;

    cout << "PGCD : " << endl;

    cout << "Quelle est le nombre 1 du PGCD ? " << endl;cin>>m;
    cout << "Quelle est le nombre 2 du PGCD ? " << endl;cin>>n;

    int pg = pgcd(m, n);

    cout << "Le pgcd est " << pg << endl;

    return 0;
}