#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string reverse(string const &s)
{
    string rev;
    for (int i = s.size() - 1; i >= 0; i--) {
        rev = rev.append(1, s[i]);
    };
 
    return rev;
}

int main(){
    string S;
    cin >> S;

    string s = reverse(S);
    if (s[0] != 'n') return cout << "No" << endl, 0;
    if (s[1] != 'a') return cout << "No" << endl, 0;
    if (s[2] != 's') return cout << "No" << endl, 0;
    cout << "Yes" << endl;
    

    return 0;
}
