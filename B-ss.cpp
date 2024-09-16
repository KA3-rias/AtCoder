#include <bits/stdc++.h>
using namespace std;

bool isSame(string a,string b){
    for (int i = 0; i < a.length(); ++i){
        if(a[i]!=b[i]) return false;
    }
    return true;
}

int main() {
    string S;
    cin >> S;
    int len = S.length();


    for (int i = 0; i < len; ++i){
        S.pop_back();
        string a, b;
        // 文字列を前半と後半に分ける
        a = S.substr(0, S.length() / 2);
        b = S.substr(S.length() / 2 );

        if (isSame(a, b)){
            cout << a.length() * 2 << endl;
            return 0;
        }
    }
    return 0;
}
