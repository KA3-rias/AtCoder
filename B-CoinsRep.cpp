#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main(){
    int A, B, C, X;
    cin >> A >> B >> C >> X;

    int result = 0;

    // 全探索
    rep(a, A + 1){
        rep(b, B + 1){
            rep(c, C + 1){
            // 合計金額が x 円に一致したら 1 増やす
            if (500*a + 100*b + 50*c == X) ++result;
            }
        }
    }
    cout << result << endl;
}
