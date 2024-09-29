#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){

    int cnt = 0;
    for (int i = 1; i <= 12; ++i){
        string S;
        cin >> S;

        if (i == S.size()) ++cnt;
    }
    cout << cnt << endl;
    return 0;
}
