#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    int N, C;
    cin >> N >> C;
    vector<int> a(N);
    for (int i = 0; i < N; ++i){
        cin >> a[i];
    }
    
    int cnt = 1;
    int b = a[0],tmp = a[0];
    for (int i = 1; i < N; ++i){
        b = a[i] - b;
        if (b >= C) {
            ++cnt;
            b = a[i];
            tmp = b;
        }
        b = tmp;
    }
    

    cout << cnt << endl;
    
    return 0;
}
