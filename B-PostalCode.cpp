#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    string S;
    cin >> A >> B >> S;

    int SLen = A + B + 1;
    int hyphen = A;
    //ハイフンの数
    int cnt_hyphen = count(S.begin(), S.end(), '-');

    if (S.size() != SLen) return cout << "No" << endl, 0;
    if (S[hyphen] != '-') return cout << "No" << endl, 0;
    if (cnt_hyphen != 1)  return cout << "No" << endl, 0;

    cout << "Yes" << endl;
    return 0;
}
