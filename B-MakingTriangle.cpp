#include <bits/stdc++.h>
using namespace std;


int main(){
    int N;
    cin >> N;
    vector<int> P(N);
    for (int i = 0; i < N; ++i){
        cin >> P[i];
    }
    
    // 計算
    int ans = 0;
    for (int i = 0; i < N; ++i){
        for (int j = i + 1; j < N; ++j){
            for (int k = j + 1; k < N; ++k){
                //全て違う長さならば
                if (P[i] != P[j] && P[j]!= P[k] && P[k] != P[i]){
                    //cout << i+1 << "," << j+1 << ","<< k+1 << endl;
                    //三角形の条件を満たしたら
                    vector<int> test = {P[i], P[j], P[k]};
                    sort(test.rbegin(), test.rend());
                    if(test[0] < test[1] + test[2]){
                        ++ans;
                    }
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}
