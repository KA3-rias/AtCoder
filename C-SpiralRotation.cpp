#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    int N;
    cin >> N;


    vector<vector<char>> A(N, vector<char>(N));
    vector<vector<char>> A_tmp(N, vector<char>(N));
    for (int i = 0; i < N; ++i){
        for (int k = 0; k < N; ++k){
            cin >> A[i][k];
            A_tmp[i][k] = A[i][k];
        }
    }
    
    
    for (int i = 0; i < N; ++i){
        for (int k = 0; k < N; ++k){
            int ni = i, nk = k;
            // 回転数K min()は外から数えて今何層目か。
            int K = min({ni+1, nk+1, N-ni, N-nk})%4;
            for (int ki = 0; ki < K; ++ki){
                //座標の変更
                swap(ni,nk);
                //元の列インデックスが右から数えて何番目かを計算
                nk = N-1-nk;
            }
            A[ni][nk] = A_tmp[i][k];
        }
    }
    

    //出力
    for (int i = 0; i < N; ++i){
        for (int k = 0; k < N; ++k){
            cout << A[i][k];
        }
        cout << endl;
    }


    return 0;
}
