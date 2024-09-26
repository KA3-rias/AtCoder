#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    ll teams;
    cin >> teams;
    ll N = 3 * teams;

    vector<ll> A(N);
    for (int i = 0; i < N; ++i){
        cin >> A[i];
    }

    sort(A.rbegin(), A.rend());

    ll cnt = 0;
    ll sum = 0;
    for (ll i = 0; i < N; ++i){
        if(i % 2 == 1){
            sum += A[i];
            ++cnt;
            if (cnt == teams) break;
        }
    }


    cout << sum <<endl;
    return 0;
}
