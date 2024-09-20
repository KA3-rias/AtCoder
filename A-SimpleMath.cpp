#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MOD = 998244353;

int main(){
    ll A, B, C;
    cin >> A >> B >> C;
    //これだとオーバーフローする
    //ll sum = A*(A+1)/2 * B*(B+1)/2 * C*(C+1)/2;

    ll sumA = A*(A+1)/2 % 998244353;
    ll sumB = B*(B+1)/2 % 998244353;
    ll sumC = C*(C+1)/2 % 998244353;

    ll ans = sumA * sumB % 998244353 * sumC % 998244353;

    cout << ans % 998244353 << endl;
    return 0;
}
