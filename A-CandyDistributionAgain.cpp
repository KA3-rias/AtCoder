#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    ll N, x;
    cin >> N >> x;
    vector<ll> A(N);
    for (int i = 0; i < N; ++i){
        cin >> A[i];
    }

    sort(A.begin(), A.end());
    int cnt = 0;
    for (int i = 0; i < N; ++i){
        if(x >= A[i]){
            x -= A[i];
            ++cnt;
        }
        else break;
    }
    // 飴を余らせてしまった場合
    if (cnt == N && x) --cnt;
    cout << cnt <<endl;
    return 0;
}
