#include <iostream>

using namespace std;

int main() {
    int i = 0;
    int s(0);
    do {
        s += i;
        i++;
    } while (i < 11);

    cout << "La somme est : " << s << endl;

    return 0;
}