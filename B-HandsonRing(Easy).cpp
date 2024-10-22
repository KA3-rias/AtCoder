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
    
    int ans = 0,cnt = 0,from,to,ng;
    int cl = N+1,rcl = N+1;
    bool isLeft = false;
    
    for (int i = 0; i < Q; ++i){
        //左手を移動
        if(hand[i] == 'L'){
            from = left;
            to = move[i];
            ng = right;
            isLeft = true;
        //右手を移動
        } else if(hand[i] == 'R'){
            from = right;
            to = move[i];
            ng = left;
        }
        // 時計回り
        int tmp = from;
        while(1){
            if (tmp == to){
                cl = cnt;
                cnt = 0;
                break;
            }
            ++tmp;
            ++cnt;
            if (tmp>N) tmp -= N;
            if(tmp == ng){
                cnt = 0;
                break;
            }
        }

        // 反時計回り
        tmp = from;
        while(1){
            if (tmp == to){
                rcl = cnt;
                cnt = 0;
                break;
            }
            --tmp;
            ++cnt;
            if (tmp < 1) tmp += N;
            if(tmp == ng){
                cnt = 0;
                break;
            }
        }
        ans += min (cl, rcl);
        cl = N+1;
        rcl = N+1;
        if(isLeft){
            left = to;
            isLeft = false;
        } else {
            right = to;
        }
    }
    


    cout << ans << endl;
    
    return 0;
}
