#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;
//入力
int N;
// a[i], b[i], c[i] をそれぞれまとめて a[i][0], a[i][1], a[i][2] にしてしまう
long long a [100010][3];

// DP テーブル
long long dp[100010][3];


int main() {
    
    cin >> N;

    for (int i = 0; i < N; ++i){
        for (int k = 0; k < 3; ++k){
            cin >> a[i][k];
        }
    }


    // 初期化は既に 0 に初期化される
    // 初期条件も既に 0 で OK


    // ループ
    
    for (int i = 0; i < N; ++i){
        for (int j = 0; j < 3; ++j){
            for (int k = 0; k < 3; ++k){
                //前日と同じ行動ならスキップ
                if(j == k) continue;
                // dp 今までのメモ　a 行動ポイント表
                chmax(dp[i + 1][k], dp[i][j] + a[i][k]);
            }
        }
    }
    

    // 答え
    ll res = 0;
    for (int j = 0; j < 3; ++j){
        chmax(res, dp[N][j]);
    }
    
    cout << res << endl;


    return 0;
}
