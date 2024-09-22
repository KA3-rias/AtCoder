#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int M;
    cin >> M;
    vector<int> A;

    while (M){
        //breakしたらiはまた10から始める
        for (int i = 10; i >= 0; --i){
            if(pow(3, i) <= M){
                M -= pow(3, i);
                A.push_back(i);
                break;
            }
        }
    }

    int N = A.size();
    //配列数Nと配列Aを出力
    cout << N << endl;
    for (int i = 0; i < N; ++i){
        cout << A[i] << " ";
    }
    
    cout << endl;
    return 0;
}
