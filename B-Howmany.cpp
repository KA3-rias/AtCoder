#include <bits/stdc++.h>
using namespace std;


int main(){
    int S, T;
    cin >> S >> T;

    int cnt = 0;

    for (int i = 0; i <= 100; ++i){
        for (int k = 0; k <= 100; ++k){
            for (int d = 0; d <= 100; ++d){
                if (i + k + d <= S && i * k * d <= T){
                    ++cnt;
                }
            }
        }
    }

    cout << cnt << endl;
    return 0;
}
