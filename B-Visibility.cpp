#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    int H, W, X, Y;
    cin >> H >> W >> X >> Y;
    // 自分の座標の数値を配列と揃える
    X -= 1;
    Y -= 1;

    // 関数にしたい
    // 文字列を1文字ずつに分割して二次元配列に保存
    vector <vector<char>> A(H, vector<char> (W));
    for (int i = 0; i < H; ++i){
        string tmp;
        cin >> tmp;
        for (int k = 0; k < W; ++k){
            A[i][k] = tmp[k];
        }
    }

    int cnt = 0;

    //　自分から下に見えるマスを数える
    for (int i = 1; i < H; ++i){
        // 障害物があったら　または　範囲外に行ったら　終了
        if (X + i >= H) break;
        if (A[X + i][Y] == '#') break;
        //cout << X + i << " " << Y << endl;
        ++cnt;
    }
    //　自分から上に見えるマス
    for (int i = 1; i < H; ++i){
        if (X - i < 0) break;
        if (A[X - i][Y] == '#') break;
        //cout << X - i << " " << Y << endl;
        ++cnt;
    }

    //　自分から左に見える
    for (int i = 1; i < W; ++i){
        if (Y - i < 0) break;
        if (A[X][Y - i] == '#') break;
        //cout << X << " " << Y - i << endl;
        ++cnt;
    }

    //　自分から右に見えるマス
    for (int i = 1; i < W; ++i){
        if (Y + i >= W) break;
        if (A[X][Y + i] == '#') break;
        //cout << X << " " << Y + i << endl;
        ++cnt;
    }

    //最後に自マスを含める　+1
    cout << cnt + 1 << endl;

    return 0;
}
