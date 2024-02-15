#include <iostream>
#include <list>
#include <vector>
using namespace std;

template<typename T>
vector<T> &operator+=(vector<T> &x, const vector<T> &y) {
    x.reserve(x.size() + y.size());
    x.insert(x.end(), y.begin(), y.end());
    return x;
}

void afficher(vector <int> liste)
{
    for (int elem : liste) {
        cout << elem <<"  ";
    }
    cout << "\n";
}


vector<int> rendu_glouton(vector<int> valeurs, int a_rendre, int rang) {
    if (a_rendre == 0) {
        return {};
    }
    int v = valeurs[rang];
    if (v <= a_rendre){
        vector<int> renvoi = {v};
        renvoi += rendu_glouton(valeurs, a_rendre-v, rang);
        return renvoi;
    } else {
        return rendu_glouton(valeurs, a_rendre, rang+1);
    }
}

int main()
{
    vector<int> valeurs = {100,50,20,10,5,2,1};
    vector<int> rendu = rendu_glouton(valeurs, 291, 1);
    
    for (int x = 0; x < rendu.size(); x++){
        cout << rendu[x] << endl;
    }
    
    return 0;
}

