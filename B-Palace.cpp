#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <cstdlib>
using namespace std;

constexpr int INF = 1 << 30;

int main() {
    int N, T, A;
    cin >> N >> T >> A;

    vector<int> height(N);

    for (int i = 0;i < N; ++i) {
        cin >>height[i];
    }

    int point = -1;
    double temperature,tmp;
    double result = 1e9;

    for (int i = 0; i < N; ++i){
        temperature = T - height[i] * 0.006;
        tmp = abs(A - temperature);
        if (result > tmp) {
            point = i+1;
            result = tmp;
            cout << i << "地点目" << " 結果 "<< tmp << endl;
        }
    }
    cout << point << endl;
}

