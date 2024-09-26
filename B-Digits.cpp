#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string toBaseK(int N,int K){
    string ans;
    while(N){
        ans += to_string(N % K);
        N /= K;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    int N, K;
    cin >> N >> K;

    string base = toBaseK(N, K);
    cout << base.length() << endl;
    return 0;
}
