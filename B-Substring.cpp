#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    string T, S;
    cin >> S >> T;
    int lenS = S.length();
    int lenT = T.length();
    int ans = 3000;
    int cnt = 0;


    // 文字列Tの開始位置全探索
    for (int i = 0; i <= lenS - lenT; ++i){
        for (int k = 0; k < lenT; ++k){
            // 違うならば置き換えてカウントアップ
            if (S[i+k] != T[k]) ++cnt;
        }
        // 書き換えたカウントが保存しておいた数より低かったら更新
        ans = min(ans, cnt);
        cnt = 0;
    }


    cout << ans << endl;
    return 0;
}
