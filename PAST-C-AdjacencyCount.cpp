#include <bits/stdc++.h>
using namespace std;

// 二次元盤面上のマス(i, j)の周囲 8 マスへの差分を定義
// 0:下 1:右 2:上 3:左 4:右下 5:右上 6:左上 7:左下
vector<int> DX ={1, 0, -1, 0, 1, -1, -1, 1};
vector<int> DY ={0, 1, 0, -1, 1, 1, -1, -1};

int main(){
    // H x W の盤面を入力
    int H, W;
    cin >> H >> W;

    vector<vector<char>> S(H, vector<char>(W));
    vector<vector<char>> num(H, vector<char>(W));

    // 二次元配列に入力
    for (int i = 0; i < H; ++i){
        for (int k = 0; k < W; ++k){
            cin >> S[i][k];
        }
    }

    // 各マス（i, j）を順に処理
    for (int i = 0; i < H; ++i){
        for (int j = 0; j < W; ++j){
            int cnt = 0;
            // 空きマス以外（爆弾）自マスの分カウントを+しておく
            if (S[i][j] != '.'){
                ++cnt;
            }

            // 周囲 8 マスの’＃’ の個数を数える
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
            num[i][j] = '0' + cnt;
        }
    }

    // 出力

    for (int i = 0; i < H; ++i){
        for (int k = 0; k < W; ++k){
            cout << num[i][k];
        }
        cout << endl;
    }

}
