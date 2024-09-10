#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
    int N;
    cin >> N;

    vector<int> Q(N);

    for (int i = 0;i < N; ++i) {
        cin >>Q[i];
    }
    //ソート
    sort(Q.begin(), Q.end());
    // 真ん中を探る
    int mid = Q.size() / 2;
    //cout << Q[mid] << endl;
    // 真ん中二つの難易度の平均
    int K = (Q[mid - 1] + Q[mid]) / 2;
    int K_min, K_max;
    K_min = Q[mid - 1] + 1;
    K_max = Q[mid];
    int ans = K_max - K_min;
    if (ans < 0) ans = 0;
    else ans += 1;


    cout << ans << endl;
    return 0;
}

