#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    string S;
    cin >> S;
    
    S.erase(remove(S.begin(),S.end(),'.'),S.end());

    cout << S << endl;
    
    return 0;
}
