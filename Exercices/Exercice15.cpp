#include <iostream>

using namespace std;

int main() {
    int i = 1 ;
    int s(0);
    while (i<11) {
        s += i;
        i++;
    }

    cout << "Somme : " << s << endl;

    return 0;
}