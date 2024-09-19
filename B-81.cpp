#include <bits/stdc++.h>
using namespace std;


int main(){
    int N;
    cin >> N;

    // 九九
    for (int i = 0; i <= 9; ++i){
        for (int j = 0; j <= 9; ++j){
            int ans = i * j;
            if (ans == N) return cout << "Yes" << endl, 0;
        }
    }

    cout << "No" << endl;

}
