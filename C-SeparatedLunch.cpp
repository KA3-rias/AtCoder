#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

int main() {
    //最大n=20
    int n;
    cin >> n;


    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    // 全ての組み合わせの数　最大2**20
    int total_combinations = pow(2, n);
    int min_difference = INT_MAX;
    vector<int> best_group1, best_group2;
    vector<pair<int, int>> sum_history; // グループの合計数の履歴を保存するベクター

    //bit全探索
    for (int i = 0; i < total_combinations; ++i) {
        vector<int> group1, group2;
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                group1.push_back(numbers[j]);
                sum1 += numbers[j];
            } else {
                group2.push_back(numbers[j]);
                sum2 += numbers[j];
            }
        }
        sum_history.push_back(make_pair(sum1, sum2)); // 合計数を履歴に追加
        int difference = abs(sum1 - sum2);
        if (difference < min_difference) {
            min_difference = difference;
            best_group1 = group1;
            best_group2 = group2;
        }
    }

    int ans1 = 0, ans2 = 0;
    for (int num : best_group1) {
        ans1 += num;
    }
    for (int num : best_group2) {
        ans2 += num;
    }

    cout << max(ans1, ans2) << endl;

    return 0;
}
