#include <bits/stdc++.h>
using namespace std;

int main() {;
    string S, s1, s2;
    cin >> S;
    //文字列の分割
    int sep = S.size() / 2;
        //文字数が偶数
    if (S.size() % 2 == 0) {
        s1 = S.substr(0, sep);
        s2 = S.substr(sep);
    }
        //文字数が奇数
    else {
    s1 = S.substr(0, sep);
    s2 = S.substr(sep + 1);
    }

    reverse(s1.begin(), s1.end());
    
    // 1 文字ずつ比較して違うなら置き換えてカウントアップ
    int cnt = 0;
    for (int i = 0; i < s1.size(); ++i){
        if(s1[i] != s2[i]) {
            s1[i] = s2[i];
            ++cnt;
        }
    }
    cout << cnt << endl;
    return 0;
}
