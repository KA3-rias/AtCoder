#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    string s, ans;
    for (int i = 0; i < 3; ++i){
        cin >> s;
        ans.push_back(toupper(s[0]));
    }

    cout << ans << endl;

    return 0;
}
