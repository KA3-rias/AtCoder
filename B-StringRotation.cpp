#include <bits/stdc++.h>
using namespace std;

bool isSame(string a,string b){
    for (int i = 0; i < a.length(); ++i){
        if(a[i]!=b[i]) return false;
    }
    return true;
}
string String_Rotate (string Sr, int i){
    int n = i; // 右に回転させる位置
    int len = Sr.length();
    // 右に回転させるために、左に回転させる位置を計算
    n = len - n;

    // std::rotateを使用して文字列を回転させる
    std::rotate(Sr.begin(), Sr.begin() + n, Sr.end());

    //std::cout << "右に回転後の文字列: " << Sr << std::endl;
    return Sr;
}


int main() {
    string S, Sr, T;
    cin >> S >> T;
    Sr = S;
    int len = S.length();
    int cnt = 0;

    //最初から同じか確認
    if (isSame(S, T)){
        cout << "Yes" << endl;
        return 0;
    }

    for (int i = 1; i < len; ++i){
        Sr = String_Rotate(Sr, i);

        if (isSame(Sr, T)){
            cout << "Yes" << endl;
            return 0;
        }
        //初期値にリセット
        Sr = S;
    }

    cout << "No" << endl;
    return 0;
}
