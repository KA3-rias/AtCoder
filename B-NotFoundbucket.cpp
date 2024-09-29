#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){

    string al = "abcdefghijklmnopqrstuvwxyz";
    string S;
    cin >> S;

    //bool配列　初期値false
    bool al_find[26];
    for (int i = 0; i < 26; ++i){
        al_find[i] = false;
    }
    // 'b' - 'a' = [1]
    for (int i = 0; S[i] != '\0'; ++i) {
        al_find[S[i] - 'a'] = true;
    }

    for (int i = 0; i < 26; ++i){
        if (!al_find[i]){
            cout << al[i] << endl;
            return 0;
        }
    }
    
    cout << "None" << endl;


    return 0;
}
