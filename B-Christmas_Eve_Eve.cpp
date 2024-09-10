#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
    int N;
    cin >> N;

    vector<int> Price(N);

    for (int i = 0;i < N; ++i) {
        cin >>Price[i];
    }

    sort(Price.rbegin(), Price.rend());

    int sum = 0;

    for (int i = N - 1; i > 0; --i){
        sum = sum + Price[i];
    }
    sum += Price[0] / 2;
    cout << sum << endl;
    return 0;
}

