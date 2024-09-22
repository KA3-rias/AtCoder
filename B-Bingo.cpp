#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    vector <vector<int>> A(3, vector<int> (3));
    vector <vector<int>> ans(3, vector<int> (3));
    
    for (int i = 0; i < 3; ++i){
        for (int k = 0; k < 3; ++k){
            cin >> A[i][k];
            ans [i][k] = 0;
        }
    }
    int N;
    cin >> N;
    int tmp;

        
    
    for (int a = 0; a < N; ++a){
        // 出てきたボール
        cin >> tmp;
        for (int i = 0; i < 3; ++i){
            for (int k = 0; k < 3; ++k){
                if(tmp != A[i][k]) continue;
                ans[i][k] = 1;
            }
        }
    }
    // 1:斜め 2:左縦 3:真ん中縦 4:右縦 5:斜め 6:上横 7:真ん中横 8:下横
    if(ans[0][0] == 1 && ans[1][1] == 1 && ans[2][2] == 1) return cout << "Yes" << endl, 0;
    if(ans[0][0] == 1 && ans[1][0] == 1 && ans[2][0] == 1) return cout << "Yes" << endl, 0;
    if(ans[0][1] == 1 && ans[1][1] == 1 && ans[2][1] == 1) return cout << "Yes" << endl, 0;
    if(ans[0][2] == 1 && ans[1][2] == 1 && ans[2][2] == 1) return cout << "Yes" << endl, 0;
    if(ans[0][2] == 1 && ans[1][1] == 1 && ans[2][0] == 1) return cout << "Yes" << endl, 0;
    if(ans[0][0] == 1 && ans[0][1] == 1 && ans[0][2] == 1) return cout << "Yes" << endl, 0;
    if(ans[1][0] == 1 && ans[1][1] == 1 && ans[1][2] == 1) return cout << "Yes" << endl, 0;
    if(ans[2][0] == 1 && ans[2][1] == 1 && ans[2][2] == 1) return cout << "Yes" << endl, 0;

    
    cout << "No" << endl;

    return 0;
}
