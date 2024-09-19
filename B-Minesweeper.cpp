#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

// 二次元盤面上のマス(i, j)の周囲 8 マスへの差分を定義
// 0:下 1:右 2:上 3:左 4:右下 5:右上 6:左上 7:左下
vector<int> DX ={1, 0, -1, 0, 1, -1, -1, 1};
vector<int> DY ={0, 1, 0, -1, 1, 1, -1, -1};

int main(){
    // H x W の盤面を入力
    int H, W;
    cin >> H >> W;
    vector<string> S(H);
    for (auto& row : S){
        cin >> row;
    }

    // 各マス（i, j）を順に処理
    for (int i = 0; i < H; ++i){
        for (int j = 0; j < W; ++j){
            // 空きマス以外（爆弾）はそのままにして次のループへ
            if (S[i][j] != '.'){
                continue;
            }

            // 周囲 8 マスの’＃’ の個数を数える
            int cnt = 0;
            for (int d = 0; d < 8; ++d){
                // マス(i, j)の周囲のマスを(ni, nj) とする
                int ni = i + DX[d];
                int nj = j + DY[d];

                // マス(ni, nj) が盤面外の場合はスキップ
                if(ni < 0 || ni >= H || nj < 0 || nj >= W){
                    continue;
                }

                // # であれば 1 増やす
                if (S[ni][nj] == '#') ++cnt;
            }
            // マス(i, j)に個数を char 型に変換して記録
            S[i][j] = '0' + cnt;
        }
    }
    // 出力
    for (auto row : S){
        cout << row << endl;
    }
}
