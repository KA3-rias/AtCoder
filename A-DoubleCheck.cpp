#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    int num = 0;
    for (int i = 0; i < 3; ++i){
        if(!isdigit(S[i])){
            cout << "error" << endl;
            return 0;
        }
        num = num*10 + (S[i]-'0');
    }

    cout << num * 2 << endl;
    return 0;
}
