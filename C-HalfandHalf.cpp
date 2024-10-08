#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    int X, Y, A, B, C;
    cin >> A >> B >> C >> X >> Y;

    ll sum = 0, ans = LLONG_MAX;

    for (int ab = 0; ab <= max(X, Y) * 2; ++ab){
        //目標枚数を買えてるかどうか 
        //修正前　if (a == X - (ab / 2)&& b == Y  - (ab / 2))
        int a = max(0, X - ab / 2);
        int b = max(0, Y - ab / 2);
        //合計金額
        sum = A*a + B*b + C*ab;
        ans = min(ans, sum);
    }

    cout << ans << endl;

    return 0;
}
