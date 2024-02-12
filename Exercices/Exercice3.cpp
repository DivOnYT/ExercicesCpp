#include <iostream>

using namespace std;

int main() {
    float a = 2; float b  = 4; float temp = 0;
    cout << "La valeur de a " << a << endl << "La valeur de b " << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "Valeurs échangées" << endl;
    cout << "La valeur de a " << a << endl << "La valeur de b " << b << endl;
    return 0;
}