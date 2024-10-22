#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;

using S = long long;
S INF = 1e18;
S op_max(S a, S b) { return max(a, b); }
S e_max() { return -INF; }
S op(S a, S b) { return a+b; }
S e() { return 0; }

int main() {
    int T, N, K;
    cin >> T;

    for (int t = 0; t < T; ++t){
        cin >> N >> K;
        vector<ll> A(N),B(N);
        for (int i = 0; i < N; ++i) {cin >> A[i];}
        for (int i = 0; i < N; ++i) {cin >> B[i];}
        
        //セグ木の宣言
        segtree<S, op_max, e_max> seg_max(N);
        segtree<S, op, e> seg(N);

        // セグ木に値をセット
        for (int i = 0; i < N; ++i) {
            seg_max.set(i, A[i]);
            seg.set(i, B[i]);
        }

        // 組み合わせを生成して走査
        ll minValue = INF;
        vector<int> indices(N);
        iota(indices.begin(), indices.end(), 0); // 0, 1, 2, ..., N-1

        vector<bool> select(N, false);
        fill(select.end() - K, select.end(), true); // K個のtrueをセット

        do {
            vector<int> subset;
            for (int i = 0; i < N; ++i) {
                if (select[i]) {
                    subset.push_back(i);
                }
            }

            ll maxA = -INF;
            ll sumB = 0;
            for (int idx : subset) {
                maxA = max(maxA, A[idx]);
                sumB += B[idx];
            }
            minValue = min(minValue, maxA * sumB);

        } while (next_permutation(select.begin(), select.end()));

        cout << minValue << endl;
    }

    return 0;
}
