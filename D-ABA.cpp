#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string S;
    cin >> S;

    int len = S.size();

    vector<int> lcnt(26);
    vector<int> rcnt(26);
    // rcntに初期値を入れる
    for (int i = 0; i < len; ++i){
        rcnt[S[i]-'A']++;
    }
    

    ll ans = 0;
    for (int j = 0; j < len; ++j){
        //右辺のカウントを減らし
        rcnt[S[j]-'A']--;
        for (int c = 0; c < 26; ++c){
            //同じ文字同士掛ける
            ans += (ll)lcnt[c]*rcnt[c];
        }
        // 左辺のカウントを増やす
        lcnt[S[j]-'A']++;
    }
    
    cout << ans << endl;
    return 0;
}
