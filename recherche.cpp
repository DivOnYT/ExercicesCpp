#include <iostream>

using namespace std;

int occurences(const char &tocompare, const string &chaine) {
    int count = 0;
    for (int i = 0; i < chaine.length(); i++){
        if (tocompare == chaine[i]){
            count++;
        }
    }
    return count;
}

int main()
{
    char caractère;
    string chaine;
    
    cout << "Le charactere dont le programme doit compter le nombre d'occurences : ";cin>>caractère;
    cout << "La chaine dans lequel le caractère doit être compté : ";cin>>chaine;
    
    int count = occurences(caractère, chaine);
    
    cout << "Le nombre d'occurences est " << count << endl;
    
    return 0;
}

