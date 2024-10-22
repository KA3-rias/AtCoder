#include <bits/stdc++.h>
using namespace std;
using ll = long long;



int main(){
    ll N;
    cin >> N;
    vector<ll> A(N);
    for (ll i = 0; i < N; ++i){
        cin >> A[i];
    }
    
    vector<ll> B(N-1);
    for (ll i = 0; i < N-1; ++i){
        cin >> B[i];
    }
    
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    //入力ここまで
    
    auto judge = [&](int x) {
        auto nb = B;
        nb.push_back(x);
        sort(nb.begin(), nb.end());
        for (int i = 0; i < N; ++i){
            if(A[i] > nb[i]) return false;
        }
        return true;
    };

    const ll INF = 1001001001;
    ll ok = INF, ng = 0, X;

    while(ok - ng > 1){
        X = (ok+ng)/2;
        if(judge(X)) ok = X; else ng = X;
    }
    
    if(ok == INF) cout << -1 << endl;
    else cout << ok << endl;


    
    return 0;
}
