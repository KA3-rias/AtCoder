#include <bits/stdc++.h>
using namespace std;

// ACか判定する
bool isAC (string S){
    // Sの先頭が'A'でないならFalse
    if (S[0] != 'A') return false;

    // Sの先頭2文字と末尾1文字を除いて'C'が一個以外ならFalse
    int cnt_C = count(S.begin() + 2, S.end() - 1, 'C');
    if (cnt_C != 1) return false;

    // Sに含まれる大文字が2個以外ならFalse
    int cnt_Upper = 0;
    // 文字列Sの各文字cを順に走査
    for (auto c:S){
        if (isupper(c)) ++cnt_Upper;
    }
    if (cnt_Upper != 2) return false;

    return true;
}

int main() {
    string S;
    cin >> S;

    if (isAC(S)) cout << "AC" << endl;
    else         cout << "WA" << endl;
    return 0;
}
