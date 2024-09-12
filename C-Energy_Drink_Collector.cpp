#include <bits/stdc++.h>
using namespace std;



int main() {
    // N 件の店, M 本買う
    int N, M;
    cin >> N >> M;

    vector<pair<long long, long long>> price_stock(N);

    for (int i = 0;i < N; ++i) {
        int a, b;
        cin >> a >> b;
        price_stock.at(i) = make_pair(a, b);
    }

    sort(price_stock.begin(), price_stock.end());
    long long sum = 0;
    int cnt = M;
    for (int i = 0; i < N; ++i){
        // 必要本数が 0 ならループを抜ける
        if (cnt == 0) break;
        // i件目の店のストックが残り必要本数以下なら
        else if (price_stock[i].second<= cnt){
            // お金を払い
            sum += price_stock[i].first * price_stock[i].second;
            // 必要本数をストック分減らす
            cnt -= price_stock[i].second;
        }
        // i件目の店のストックが残り必要本数より多いなら
        else{
            //残り必要本数分のお金を払い
            sum += price_stock[i].first * cnt;
            // 必要本数を必要本数分減らす
            cnt -= cnt;
        }
    }
    

    cout << sum << endl;
    return 0;
}

