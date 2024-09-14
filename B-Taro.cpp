#include <bits/stdc++.h>
using namespace std;

int main() {
    // N 個の家, M 人の子供
    int N, M;
    cin >> N >> M;

    // 求めた番号を記録する
    vector <pair<pair<int, int>, char>> house_num_s(M);
    vector <string> ans(M);


    for (int i = 0;i < M; ++i) {
        int a;
        char b;
        cin >> a >> b;
        house_num_s[i] = make_pair(make_pair(a, i), b);
    }

    // boolの配列
    vector <bool> hasTaro(N, false);
    for (int i = 0; i < M; ++i){
        //M かつフラグが立っていないなら
        if (house_num_s[i].second == 'M' and hasTaro[house_num_s[i].first.first] == false){
            ans[house_num_s[i].first.second] = "Yes";
            hasTaro[house_num_s[i].first.first] = true;
        }
        else ans[house_num_s[i].first.second] = "No";
    }

    for (int i = 0; i < M; ++i){
        cout << ans[i] << endl;
    }
    return 0;
}

