#include <iostream>

using namespace std;

int main() {
    int mois;
    string traduction;

    cout << "Chiffre pour un mois en lettre : "<<endl;cin>>mois;

    switch (mois) {
        case 1:
            traduction = "janvier";
            break;
        case 2:
            traduction = "février";
            break;
        case 3:
            traduction = "mars";
            break;
        case 4:
            traduction = "avril";
            break;
        case 5:
            traduction = "mai";
            break;
        case 6:
            traduction = "juin";
            break;
        case 7:
            traduction = "juillet";
            break;
        case 8:
            traduction = "octobre";
            break;
        case 9:
            traduction = "novembre";
            break;
        case 10:
            traduction = "décembre";
            break;
        case 11:
            traduction = "septembre";
            break;
        case 12:
            traduction = "aout";
            break;
    }

    cout << "Le mois n°" << mois << " est " << traduction << endl;

    return 0;
}