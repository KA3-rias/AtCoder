#include <bits/stdc++.h>
using namespace std;

bool isSame(string a,string b){
    for (int i = 0; i < a.length(); ++i){
        if(a[i]!=b[i]) return false;
    }
    return true;
}

string String_Swap (string Ss, int i){
    swap(Ss[i], Ss[i + 1]);

    //std::cout << "Swap後の文字列 " << Ss << std::endl;
    return Ss;
}

int main() {
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
