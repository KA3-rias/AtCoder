#include <bits/stdc++.h>
using namespace std;

// 二次元盤面上のマス(i, j)の下 3 マスへの差分を定義
//  0:左下 1:下 2:右下 
vector<int> DX ={1, 1, 1};
vector<int> DY ={-1, 0, 1};

int main(){
    // H x W の盤面を入力 例:(N=5)
    int N, H, W;
    cin >> N;
    H = N;       //例:(5)
    W = 2*N - 1; //例:(9)

    vector<vector<char>> S(H, vector<char>(W));
    vector<vector<char>> num(H, vector<char>(W));

    // 二次元配列に入力 例:([0~4][0~8])
    for (int i = 0; i < H; ++i){
        for (int k = 0; k < W; ++k){
            cin >> S[i][k];
        }
    }

    // 各マス（i, j）を順に処理 例:(3,1~7)
    for (int i = N - 2; i >= 0; --i){
        for (int j = 1; j < W - 1; ++j){

            // 爆弾マス以外（'.''X'）はそのままにして次のループへ
            if (S[i][j] != '#'){
                continue;
            }

            // 下 3 マスが’X’ か調べる
            for (int d = 0; d < 3; ++d){
                // マス(i, j)の周囲のマスを(ni, nj) とする
                int ni = i + DX[d];
                int nj = j + DY[d];

                // X であれば 現在のマスをXに変えて次へ
                if (S[ni][nj] == 'X') {
                    S[i][j] = 'X';
                    continue;
                }
            }
        }
    }

    // 出力

    for (int i = 0; i < H; ++i){
        for (int k = 0; k < W; ++k){
            cout << S[i][k];
        }
        cout << endl;
    }

}
