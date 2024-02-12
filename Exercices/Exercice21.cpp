#include <iostream>

using namespace std;

int main() {
    float table;
    cout << "Quelle table de multiplication voulez vous afficher : " << endl;cin>>table;
    for (int i(0);i<11;i++) {
        cout << i << "x" << table << "=" << table*i << endl;
    }

    return 0;
}