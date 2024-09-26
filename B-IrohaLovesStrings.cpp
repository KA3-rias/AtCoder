#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    int N, L;
    cin >> N >> L;
    vector<string> A(N);
    for (int i = 0; i < N; ++i){
        cin >> A[i];
    }

    sort(A.begin(), A.end());
    for (int i = 0; i < N; ++i){
        cout << A[i];
    }

    return 0;
}
