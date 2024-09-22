#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    int H, W;
    cin >> H >> W;
    vector <vector<char>> A(H, vector<char> (W));

    
    for (int i = 0; i < H; ++i){
        for (int k = 0; k < W; ++k){
            cin >> A[i][k];
        }
    }

    for (int i = 0; i < H; ++i){
        for (int k = 0; k < W; ++k){
            cout << A[i][k];
        }
        cout << endl;
        for (int k = 0; k < W; ++k){
            cout << A[i][k];
        }
        cout << endl;
    }


    return 0;
}
