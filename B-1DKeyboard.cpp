#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    string Alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    string S;
    cin >> S;
    string A = Alphabets;
    vector<int> move;

    int tmp = 0;
    for (int i = 0; i < 26; ++i){
        for (int k = 0; k < 26; ++k){
            if (A[i] == S[k]){
                move.push_back(k);
            }
        }
    }

    int cnt = 0;
    for (int i = 0; i < 26 - 1; ++i){
        cnt += abs(move[i+1]-move[i]);
    }
    
    cout << cnt << endl;


    return 0;
}
