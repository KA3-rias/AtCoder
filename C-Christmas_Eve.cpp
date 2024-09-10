#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

constexpr int INF = 1 << 30;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> H(N);

    for (int i = 0;i < N; ++i) {
        cin >>H[i];
    }

    sort(H.begin(), H.end());
    int ans = INF;
    int tmp;
    for (int i = 0; i < N - K + 1; ++i){
        tmp = H[i + K - 1] - H[i];
        ans = min(ans, tmp);
    }
    
    cout << ans << endl;
    return 0;
}

