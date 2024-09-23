#include <bits/stdc++.h>
using namespace std;


int main(){
    int H, W;
    cin >> H >> W;
    vector<vector<char>> P(H, vector<char>(W));

    // 二次元配列に入力
    for (int i = 0; i < H; ++i){
        for (int k = 0; k < W; ++k){
            cin >> P[i][k];
        }
    }
    int cnt = 0;
    for (int i = H - 1; i >= 0; --i){
        for (int k = 0; k < W; ++k){
            //横すべて.なら削除
            if (P[i][k] == '.') ++cnt;
            if (cnt == W) {
                P.erase(P.begin() + i);
                //表の高さを1減らす
                --H;
            }
        }
        cnt = 0;
    }

    for (int i = W - 1; i >= 0; --i){
        for (int k = 0; k < H; ++k){
            //縦すべて.なら削除
            if (P[k][i] == '.') ++cnt;
            if (cnt == H) {
                for (auto& row : P) {
                    row.erase(row.begin() + i);
                }
                //表の幅を1減らす
                --W;
            }
        }
        cnt = 0;
    }


    for (int i = 0; i < H; ++i){
        for (int k = 0; k < W; ++k){
            cout << P[i][k];
        }
        cout << endl;
    }
    return 0;
}
