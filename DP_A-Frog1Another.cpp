#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;
// DP テーブル
long long dp[100010];
// 入力
long long h[100010];
int N;

ll rec(int i){
    // DP の値が更新されていたらそのままリターン
    if(dp[i] < INF) return dp[i];

    // 足場 0 のコストは 0
    if(i == 0) return 0;

    // i-1, i-2 それぞれ試す
    ll res = INF;
    chmin(res, rec(i-1) + abs(h[i] - h[i - 1])); // 足場 i-1 から来た場合
    if (i > 1) chmin(res, rec(i-2) + abs(h[i] - h[i - 2])); // 足場 i-2 から来た場合

    // 結果をメモしながら、返す
    return dp[i] = res;
}



int main() {
    
    cin >> N;
    for (int i = 0; i < N; ++i) cin >> h[i];

    //初期化 (最小化問題なので INF に初期化)
    for (int i = 0; i < 100010; ++i) dp[i] = INF;


    cout << rec(N - 1) << endl;


    return 0;
}
