#include <bits/stdc++.h>
using namespace std;
using ll = long long;

double dist(double sx, double sy, double tx, double ty) {
    double dx = tx-sx, dy = ty-sy;
    return sqrt(dx*dx + dy*dy);
}


int main(){
    int N;
    cin >> N;
    vector<ll> x(N), y(N);

    for (int i = 0; i < N; ++i){
        cin >> x[i] >> y[i];
    }
    
    int nx = 0, ny = 0;
    double ans = 0;
    for (int i = 0; i < N; ++i){
        ans += dist(nx,ny,x[i],y[i]);
        nx = x[i]; ny = y[i];
    }
    // 原点に戻る
    ans += dist(nx, ny, 0, 0);

    printf("%.12f\n",ans);

    return 0;
}
