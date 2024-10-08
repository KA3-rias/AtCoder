#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int digits (ll A){
    if (A == 0) return 1;
    int counter = 0;
    while (A > 0){
        A /= 10;
        ++counter;
    }
    return counter;
}

int main(){
    ll N;
    cin >> N;

    ll ans = LLONG_MAX;
    ll tmp = LLONG_MAX;
    for (ll a = 1; a*a <= N; ++a){
        if (N % a != 0) continue;
        ll b = N/a;
        if (a*b == N){
            //桁の計算
            tmp = max(digits(a), digits(b));
            //最小値を保存
            ans = min(ans, tmp);
        }
    }

    cout << ans << endl;

    return 0;
}
