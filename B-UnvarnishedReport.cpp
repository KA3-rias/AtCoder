#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    string S, T;
    cin >> S >> T;

    int N = max(S.size(), T.size());
    for (int i = 0; i < N; ++i){
        if(S[i]==T[i]) continue;
        cout << i+1 << endl;
        return 0;
    }
    
    cout << 0 << endl;
    return 0;
}
