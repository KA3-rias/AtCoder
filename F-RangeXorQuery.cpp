#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;

//以下の3行はまるまるコピペで良い
using S = long long;
S op(S a, S b) { return a^b; }
S e() { return 0; }

void print_seg(segtree<S, op, e> &seg, int n) {
    for (int i=0; i<n; ++i) {
        //0-indexでi番目の要素を取得
        cout << seg.get(i) << ' ';
    }
    cout << endl;
}

int main() {
    int n, q;
    cin >> n >> q;
    vector<ll> a(n,0);
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    
    // セグ木の宣言
        segtree<S,op,e> seg(a);

    for (int i = 0; i < q; ++i){
        int t, x, y;
        cin >> t >> x >> y;
        // 0-index に直す
        --x;
        if (t==1){
            // x 番目の要素をA[x]^yで置き換える
            seg.set(x, seg.get(x)^y);
        } else {
            // 0-index の半開区間[x,y) を集約するので
            // --y; とする必要はない
            cout << seg.prod(x, y) << endl;
        }
    }
    

    return 0;
}
