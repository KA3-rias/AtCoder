#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
    int N, K;
    cin >> N >> K;

    vector<int> l(N);

    for (int i = 0;i < N; ++i) {
        cin >>l[i];
    }

    sort(l.rbegin(), l.rend());

    int sum = 0;

    for (int i = 0; i < K; ++i){
        sum = sum + l[i];
        //cout << "長さ" << l[i] << "足した" <<endl;
    }
    cout << sum << endl;
    return 0;
}

