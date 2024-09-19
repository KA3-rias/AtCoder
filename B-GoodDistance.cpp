#include <bits/stdc++.h>
using namespace std;


int main(){
    int N, D;
    cin >> N >> D;
    vector<vector<int>> P(N, vector<int>(D));

    // 二次元配列に入力
    for (int i = 0; i < N; ++i){
        for (int k = 0; k < D; ++k){
            cin >> P[i][k];
        }
    }
    
    // 計算
    int ans = 0;
    for (int i = 0; i < N; ++i){
        for (int j = i + 1; j < N; ++j){
            int dd = 0;
            for (int d = 0; d < D; ++d){
                // 距離の2乗 pow(abs(1-5), 2)
                dd += abs(P[i][d] - P[j][d]) * abs(P[i][d] - P[j][d]);
            }

            // 例 3.872 == 3  false
            bool flag = (sqrt(dd) == floor(sqrt(dd)));
            if (flag) ++ans;
        }
    }

    cout << ans << endl;
    return 0;
}
