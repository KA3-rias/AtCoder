#include <bits/stdc++.h>
using namespace std;

int main() {
    string o, e, ans;
    cin >> o >> e;

    for (int i = 0; i < o.length(); ++i){
        // 偶数側の中身がないなら処理を終わらせる
        if(e[i]== 0) {
            ans += o[i];
            break;
        }
        ans += o[i];
        ans += e[i];
    }

    cout << ans << endl;
    return 0;
}
