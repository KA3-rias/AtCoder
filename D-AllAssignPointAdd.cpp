#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;

using S = long long;
using F = long long;
S INF = 1e18;
S op(S a, S b){ return min(a, b); }
S e(){ return INF; }
S mapping(F f, S s){ return (f == INF ? s : f); }
F composition(F f, F g){ return (f == INF ? g : f); }
F id(){ return INF; }


int main(){
    int N;
    cin >> N;
    vector<ll> v(N, 0);
    for (int i = 0; i < N; ++i){
        cin >> v[i];
    }
    
    // 遅延セグ木の宣言
    lazy_segtree<S, op, e, F, mapping, composition, id> seg(v);

    int q;
    cin >> q;
    
    // qが０になるまで　for (int q; q > 0; --q) を省略した
    for(;q--;){
        int m;
        cin >> m;
        if (m == 1){
            ll x;
            cin >> x;
            // すべての要素を x で上書きする
            seg.apply(0, N, x);
        } else if (m == 2){
            int i;
            ll x;
            cin >> i >> x;
            --i;
            // i 番目の要素に x を加える
            ll now = seg.get(i);
            seg.set(i, now+x);
        } else {
            int i;
            cin >> i;
            --i;
            // i 番目の要素を取得する
            cout << seg.get(i) << endl;
        }
        
    }
    return 0;
}
