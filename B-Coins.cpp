#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B, C, X;
    cin >> A >> B >> C >> X;

    int result = 0;

    // 全探索
    for (int a = 0; a <= A; ++a){
        for (int b = 0; b <= B; ++b){
            for (int c = 0; c <= C; ++c){
                // 合計金額が x 円に一致したら 1 増やす
                if (500*a + 100*b + 50*c == X) ++result;
            }
        }
    }
    cout << result << endl;
}
