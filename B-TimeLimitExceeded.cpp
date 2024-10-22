#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int N,T;
    cin >> N >> T;

    vector<int> cost(N), time(N);
    for (int i = 0; i < N; ++i){
        cin >> cost[i] >> time[i];
    }

    int ans = INT_MAX;
    for (int i = 0; i < N; ++i){
        if (time[i] <= T){
            ans = min(ans, cost[i]);
        }
    }

    if (ans == INT_MAX)  return cout << "TLE" << endl, 0;
    cout << ans << endl;
    return 0;
}
