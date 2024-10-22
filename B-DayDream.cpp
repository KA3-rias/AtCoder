#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string reverse(string const &s)
{
    string rev;
    for (int i = s.size() - 1; i >= 0; i--) {
        rev = rev.append(1, s[i]);
    };
    return rev;
}

int main(){
    string S;
    cin >> S;
    S = reverse (S);
    vector<string> t{"maerd", "remaerd", "esare", "resare"};

    //Sが空白じゃないなら続ける
    while (!S.empty()){
        bool found = false;
        for (const string& word : t){
            //文字列の長さand文字列で比較
            //if (4 > S.size() - word.size() && S.size() - word.size() > 0) continue;
            if (S.size() >= word.size() && S.substr(0, word.size()) == word) {
                S = S.substr(word.size());
                found = true;
                break;
            }
        }
        if (!found){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
