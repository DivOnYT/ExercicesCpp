#include <iostream>

using namespace std;

int main() {
    int i = 0;

    cout << "La table de 8 " << endl;
    do {
        cout << i << "x" << 8 << "=" << 8*i << endl;
        i++;
    } while (i < 11);


    return 0;
}