#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    string S, s;
    cin >> S;

    s.push_back(S[1]);
    s.push_back(S[2]);
    s.push_back(S[0]);

    cout << s << endl;
    
    return 0;
}
