#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    int N;
    string S;
    cin >> N >> S;
    int cnt = 0;
    for (int i = 0; i <= N-2; ++i){
        if(S[i] == '#' && S[i+1] == '.' && S[i+2] == '#') ++cnt;
    }
    

    cout << cnt << endl;
    
    return 0;
}
