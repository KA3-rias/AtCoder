#include <bits/stdc++.h>
using namespace std;
using ll = long long;



int main(){
    int N;
    cin >> N;

    vector<int> x(N);
    vector<int> y(N);
    vector<int> h(N);
    for (int i = 0; i < N; ++i){
        cin >> x[i] >> y[i] >> h[i];
    }
    
    bool clear;
    for (int cx = 0; cx <= 100; ++cx){
        for (int cy = 0; cy <= 100; ++cy){
            int tmpH = 1;

            //tmpHを作るためのループ
            for (int i = 0; i < N; ++i){
                //0ならば使わない
                if(h[i]) tmpH =h[i]+abs(x[i]-cx) + abs(y[i]-cy);
            }

            clear = true;
            for (int i = 0; i < N; ++i){
                // 入力と矛盾するなら失敗
                if (max(tmpH-abs(x[i]-cx)-abs(y[i]-cy),0) != h[i]){
                    clear = false;
                }
            }

            if (clear){
                cout << cx << " " << cy << " " << tmpH << endl;
                return 0;
            }
        }
    }
    


    return 0;
}
