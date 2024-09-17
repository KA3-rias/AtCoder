#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    string S, Ss, T;
    cin >> S >> T;
    Ss = S;
    int len = S.length();

    //最初から同じか確認
    if (isSame(S, T)){
        cout << "Yes" << endl;
        return 0;
    }

    for (int i = 0; i < len - 1; ++i){
        Ss = String_Swap(Ss, i);

        if (isSame(Ss, T)){
            cout << "Yes" << endl;
            return 0;
        }
        //初期値にリセット
        Ss = S;
    }

    cout << "No" << endl;
    return 0;
}
