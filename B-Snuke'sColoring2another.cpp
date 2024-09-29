#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    int W, H, N;
    cin >> W >> H >> N;

    vector<int> x(N);
    vector<int> y(N);
    vector<int> a(N);
    for (int i = 0; i < N; ++i){
        cin >> x[i] >> y[i] >> a[i];
    }

    //ここまで準備
    vector<vector<int>> ans = {{0,0},{H,W}};

    for (int i = 0; i < N; ++i){
        // x < xi　を塗りつぶす
        if(a[i] == 1){
            if(ans[0][1] < x[i]) ans[0][1] = x[i];
        }

        // x > xi
        if(a[i] == 2){
            if(ans[1][1] > x[i]) ans[1][1] = x[i];
        }
        // y < yi
        if(a[i] == 3){
            if(ans[0][0] < y[i]) ans[0][0] = y[i];
        }
        // y > yi
        if(a[i] == 4){
            if(ans[1][0] > y[i]) ans[1][0] = y[i];
        }
    }
    

    if ((ans[1][0] - ans[0][0])*(ans[1][1] - ans[0][1]) < 0) {
        cout << 0 << endl;
    }
    else cout << (ans[1][0] - ans[0][0])*(ans[1][1] - ans[0][1]) << endl;

    return 0;
}
