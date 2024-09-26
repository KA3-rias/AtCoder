#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    string S;
    cin >> S;
    int lenS = S.size();
    int a = 300000;
    int z = 0;
    int ans = 0;

    for (int i = 0; i < lenS; ++i){
        if (S[i] == 'A') a = min (a, i);
        if (S[i] == 'Z') z = max (z, i);
    }
    ans = z - a;

    cout << ++ans << endl;
    return 0;
}
