#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    int N;
    cin >> N;
    vector<ll> x(N), y(N);

    for (int i = 0; i < N; ++i){
        cin >> x[i] >> y[i];
    }
    
    double ans = 0;
    for (int i = 0; i < N; ++i){
        if (i == 0){
            ans += sqrt(x[i] * x[i] + y[i] * y[i]);
            continue;
        }
        double X = x[i - 1] - x[i];
        double Y = y[i - 1] - y[i];
        ans += sqrt(X*X + Y*Y);
    }
    // 原点に戻る
    ans += sqrt(x[N-1]*x[N-1]+ y[N-1]*y[N-1]);


    printf("%.12f\n",ans);

    return 0;
}
