#include <bits/stdc++.h>
using namespace std;

bool isSame(string a,string b){
    int alen = a.length();
    int blen = b.length();
    if (alen != blen) return false;

    for (int i = 0; i < alen; ++i){
        if (a[i]!=b[i]) return false;
    }
    return true;
}

int main() {
    string S, T;
    cin >> S >> T;

    int Slen = S.length();
    int Tlen = T.length();

    // S < T にするために　T は逆順にソートする
    sort(S.begin(), S.end());
    sort(T.rbegin(), T.rend());

    // 同一の場合
    if (isSame(S, T)){
        cout << "No" << endl;
        return 0;
    }

    int k = min(Slen, Tlen);
    for (int i = 0; i < k; ++i){
        // i 文字目を比較した結果　S > T ならば
        if (S[i] > T[i]){
            cout << "No" << endl;
            return 0;
        }
        else if (S[i] < T[i]){
            cout << "Yes" << endl;
            return 0;
        }
    }
    
    // 途中まで同じで　ＳかＴどちらかが空白なら
    // Sの方が短いならYes
    if(min(Slen, Tlen) == Slen) return cout << "Yes" << endl, 0;
    else                        return cout << "No" << endl, 0;
    return 0;
}
