#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    int N;
    cin >> N;
    vector<int> X(N), Y(N), ans(N);
    for (int i = 0; i < N; ++i){
        cin >> X[i] >> Y[i];
    }

    vector<int> MAX_d(N,INT_MIN);
    for (int i = 0; i < N; ++i){
        for (int k = 0; k < N; ++k){
            // int powX = pow(X[i]-X[k],2);
            // int powY = pow(Y[i]-Y[k],2);
            int powX = (X[i] - X[k]) * (X[i] - X[k]);
            int powY = (Y[i] - Y[k]) * (Y[i] - Y[k]);
            int d = powX + powY;
            if (d > MAX_d[i]){
                MAX_d[i] = d;
                ans[i] = k + 1;
            }
        }
    }

    for (int i = 0; i < N; ++i){
        cout << ans[i] << endl;
    }
    
    return 0;
}
