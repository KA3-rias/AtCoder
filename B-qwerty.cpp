#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    char tem = 'a';

    for (int i = 0; i < 26; ++i){
        cin >> n;
        tem += n - 1;
        cout << tem;
        tem = 'a';
    }
    

    return 0;
}
