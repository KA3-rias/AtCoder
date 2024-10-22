#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    int N, Q;
    cin >> N >> Q;

    vector<char> hand(Q);
    vector<int>  move(Q);
    for (int i = 0; i < Q; ++i){
        cin >> hand[i] >> move[i];
    }
    int left = 1;
    int right = 2;
    
    int ans = 0,from,to,ng;
    bool isLeft = false;
    
    for (int i = 0; i < Q; ++i){
        //左手を移動
        if(hand[i] == 'L'){
            from = left;
            to = (move[i] - left+N)%N;
            ng = (right - left+N)%N;
            isLeft = true;
        //右手を移動
        } else if(hand[i] == 'R'){
            from = right;
            to = (move[i] - right+N)%N;
            ng = (left - right+N)%N;
        }
        // 時計回り
        if (to > ng){
            ans += N-to;
        // 反時計回り
        } else {
            ans += to;
        }
        
        if(isLeft){
            left = move[i];
            isLeft = false;
        } else {
            right = move[i];
        }
    }

    cout << ans << endl;
    
    return 0;
}
