#include <iostream>

using namespace std;

int main() {
    int s(0);
    for (int i(0);i<11;i++) {
        s += i;
    }

    cout << "La somme est : " << s << endl;

    return 0;
}