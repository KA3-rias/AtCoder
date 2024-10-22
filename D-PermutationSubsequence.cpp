#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;

using S = long long;
S INF = 1e18;
S op_max(S a, S b) { return max(a, b); }
S e_max() { return -INF; }
S op_min(S a, S b) { return min(a, b); }
S e_min() { return INF; }

int main(){
    int N, K;
    cin >> N >> K;

    vector<ll> p(N, 0);
    for (int i = 0; i < N; ++i){
        // 順列Pを読み込み、各要素はデクリメントしておく
        cin >> p[i], --p[i];
    }
    vector<ll> a(N);
    for (int i = 0; i < N; ++i){
        // Pの各要素が元々どの位置にあったかを記録する
        a[p[i]] = i;
    }

    // セグ木の宣言
    segtree<S, op_min, e_min> seg_min(a);
    segtree<S, op_max, e_max> seg_max(a);

    int ans = N;
    for (int i = 0; i < N; ++i){
        if (i+K > N) break;
        int mx = seg_max.prod(i, i+K);
        int mn = seg_min.prod(i, i+K);
        ans = min(ans, mx-mn);
    }
    
    cout << ans << endl;
    return 0;
}
