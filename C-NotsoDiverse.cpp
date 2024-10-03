#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int N, K;
    cin >> N >> K;
    //整数の登場回数
    vector<int> A_cnt(N+1);
    for (int i = 0; i < N+1; ++i){
        A_cnt[i] = 0;
    }
    
    vector<int> A(N);
    for (int i = 0; i < N; ++i){
        cin >> A[i];
        A_cnt[A[i]] += 1;
    }
    
    // 0の要素を削除
    A_cnt.erase(remove(A_cnt.begin(), A_cnt.end(), 0), A_cnt.end());
    sort(A_cnt.begin(), A_cnt.end());

    // 整数の種類数
    set<int> num;
    for (int i = 0; i < N; ++i){
        num.insert(A[i]);
    }

    // 整数の種類数がK以下なら
    if (num.size() <= K) return cout << 0 << endl, 0;

    //足りない種類分　書き換え

    int cnt = 0;
    for (int i = 0; i < num.size() - K; ++i){
        cnt += A_cnt[i];
    }
    
    cout << cnt << endl;
    





    return 0;
}
