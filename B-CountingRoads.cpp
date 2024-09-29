#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    int N, M;
    cin >> N >> M;

    vector<int> town(N);
    for (int i = 0; i < N; ++i){
        town[i] = 0;
    }


    for (int i = 0; i < M; ++i){
        int road;
        cin >> road;
        ++town[road - 1];
        cin >> road;
        ++town[road - 1];
    }
    
    for (int i = 0; i < N; ++i){
        cout << town[i] << endl;
    }
    


    return 0;
}
