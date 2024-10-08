#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;


int main() {
    
    int N;
    cin >> N;
    vector<int> h(N);
    for (int i = 0; i < N; ++i) cin >> h[i];
    

    // DP テーブル
    long long dp[100010];

    // DP テーブル全体を初期化 (最小化問題なので INF に初期化)
    for (int i = 0; i < 100010; ++i) dp[i] = INF;

    // 初期条件
    dp[0] = 0;

    // ループ
    for (int i = 0; i < N; ++i) {
        //ノードi+1へ遷移する//これまでのコストの合計+この移動のコスト
        chmin(dp[i + 1], dp[i] + abs(h[i] - h[i + 1]));
        //ノードi+2へ遷移する
        chmin(dp[i + 2], dp[i] + abs(h[i] - h[i + 2]));

    }

    // 解を得て出力
    cout << dp[N-1] << endl;


    return 0;
}
