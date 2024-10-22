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
    
    int ans = 0,tmp = 0;
    for (int i = 0; i < Q; ++i){
    cout << "i: " << i << ", hand: " << hand[i] << ", move: " << move[i] << endl;
    cout << "Before move - left: " << left << ", right: " << right << ", ans: " << ans << endl;
    if(hand[i] == 'L'){
        if(right > left){
            ans += left-1+N-move[i]+1;
        } else {
            ans += abs(left - move[i]);
        }
        left = move[i];
    }
    if(hand[i] == 'R'){
        if(left > right){
            ans += right-1+N-move[i]+1;
        } else {
            ans += abs(right - move[i]);
        }
        right = move[i];
    }
    cout << "After move - left: " << left << ", right: " << right << ", ans: " << ans << endl;
}

    


    cout << ans << endl;
    
    return 0;
}
