#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){

    string al = "abcdefghijklmnopqrstuvwxyz";
    string S;
    cin >> S;
    sort(S.begin(), S.end());
    bool Find_al = false;

    for (int i = 0; i < 26; ++i){
        for (int k = 0; k < S.size(); ++k){
            if (al[i] == S[k]) Find_al = true;
        }
        if (!Find_al) return cout << al[i] << endl, 0;
        Find_al = false;
    }
    
    
    cout << "None" << endl;


    return 0;
}
