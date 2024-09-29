#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    int W, H, N;
    cin >> W >> H >> N;
    
    vector<vector<bool>> mapColor(H, vector<bool>(W,true));

    vector<int> x(N);
    vector<int> y(N);
    vector<int> a(N);
    for (int i = 0; i < N; ++i){
        cin >> x[i] >> y[i] >> a[i];
    }

    //ここまで準備

    for (int i = 0; i < N; ++i){
        // x < xi　を塗りつぶす
        if(a[i] == 1){
            for (int h = 0; h < H; ++h){
                for (int w = 0; w < x[i]; ++w){
                    mapColor[h][w] = true;
                }
            }
        }

        // x > xi
        if(a[i] == 2){
            for (int h = 0; h < H; ++h){
                for (int w = W-1; w >= x[i]; --w){
                    mapColor[h][w] = true;
                }
            }
        }
        // y < yi
        if(a[i] == 3){
            for (int h = 0; h < y[i]; ++h){
                for (int w = 0; w < W; ++w){
                    mapColor[h][w] = true;
                }
            }
        }
        // y > yi
        if(a[i] == 4){
            for (int h = H-1; h >= y[i]; --h){
                for (int w = 0; w < W; ++w){
                    mapColor[h][w] = true;
                }
            }
        }
    }
    

    //塗られてないマスをカウント
    int cnt = 0;
    for (int i = 0; i < H; ++i){
        for (int k = 0; k < W; ++k){
            if(!mapColor[i][k]) ++cnt;
        }
    }
    
    cout << cnt << endl;

    return 0;
}
