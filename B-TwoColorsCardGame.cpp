#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int N, M;
    cin >> N;

    vector<string> blue(N);
    for (int i = 0; i < N; ++i){
        cin >> blue[i];
    }

    cin >> M;

    vector<string> red(M);
    for (int i = 0; i < M; ++i){
        cin >> red[i];
    }

    set<string> fl;
    for (int i = 0; i < N; ++i){
        fl.insert(blue[i]);
    }

    vector<pair<int, string>> ans;
    for (const auto& word : fl){
        int cnt = 0;
        for (const auto& b : blue){
            if (word == b) ++cnt;
        }
        for (const auto& r : red){
            if (word == r) --cnt;
        }
        ans.push_back(make_pair(cnt, word));
    }

    sort(ans.begin(), ans.end(), greater<pair<int, string>>());
    //ans[0].firstが0以下なら0　それ以外はそのまま出力
    cout << (ans[0].first < 0 ? 0:ans[0].first) << endl;

    return 0;
}
