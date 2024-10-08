#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;
//入力
int N;
// 品物の個数は 100 個なので少し余裕持たせてサイズ 110 に
long long W, weight[110], value[110];

// DP テーブル
long long dp[110][100100] = {0};


int main() {
    
    cin >> N >> W;

    for (int i = 0; i < N; ++i){
        cin >> weight[i] >> value[i];
    }

    // ループ

    for (int i = 0; i < N; ++i){
        for (int sum_w = 0; sum_w <= W; ++sum_w){
            // i 番目の品物を選ぶ場合
            if (sum_w - weight[i] >= 0){
                chmax(dp[i + 1][sum_w], dp[i][sum_w - weight[i]] + value[i]);
            }
            // i 番目の品物を選ばない場合
            chmax(dp[i + 1][sum_w], dp[i][sum_w]);
        }
    }
    

    cout << dp[N][W] << endl;


    return 0;
}
