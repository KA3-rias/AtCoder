#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;
int N, K;
// DP テーブル
long long dp[100010];
long long h [100010];


int main() {
    
    cin >> N >> K;
    for (int i = 0; i < N; ++i) cin >> h[i];
    


    // DP テーブル全体を初期化 (最小化問題なので INF に初期化)
    for (int i = 0; i < 100010; ++i) dp[i] = INF;

    // 初期条件
    dp[0] = 0;

    // ループ
    for (int i = 0; i < N; ++i) { //位置
        for (int k = 1; k <= K; ++k){ // 移動する量
            //ノードi+kへ遷移する
            chmin(dp[i + k], dp[i] + abs(h[i] - h[i + k]));
        }

    }

    // 解を得て出力
    cout << dp[N-1] << endl;


    return 0;
}
