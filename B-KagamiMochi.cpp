#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; ++i){
        cin >> A[i];
    }

    sort(A.rbegin(), A.rend());

    int cnt = 0;
    int tmp = 1000;
    for (int i = 0; i < N; ++i){
        if(A[i] < tmp){
            ++cnt;
            tmp = A[i];
        }
    }


    cout << cnt <<endl;
    return 0;
}
