#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    ll N;
    cin >> N;
    vector<ll> A(N);
    vector<ll> B(N);

    for (int i = 0; i < N; ++i){
        cin >> A[i];
    }
    
    for (int i = 0; i < N; ++i){
        cin >> B[i];
    }

    ll Amax = *max_element(A.begin(), A.end());
    ll Bmax = *max_element(B.begin(), B.end());

    cout << Amax + Bmax << endl;


    return 0;
}
