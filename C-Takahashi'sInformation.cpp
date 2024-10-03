#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    vector<vector<int>> c(3, vector<int>(3));
    int maxNum = 0, sum = 0;
    
    for (int i = 0; i < 3; ++i){
        for (int k = 0; k < 3; ++k){
            cin >> c[i][k];
            maxNum = max(maxNum, c[i][k]);
            sum += c[i][k];
        }
    }
    if (sum == 0) return cout << "Yes" << endl, 0;

    bool wrong, clear = false;
    vector<int> a(4);
    vector<int> b(4);
    for (int i = 0; i < maxNum; ++i){
        //上一段　b仮定
        wrong = false;
        if (clear) break;
        a[1] = i;
        for (int k = 0; k < 3; ++k){
            b[k+1] = c[0][k] - a[1];
        }

        //縦 a 2,3仮定
        for (int k = 1; k < 3; ++k){
            a[k+1] = c[k][0] - b[1];
        }

        for (int k = 0; k < 3; ++k){
            if (wrong || clear) break;
            for (int m = 0; m < 3; ++m){
                //aとbを足してcにならなかったらwrong
                if (c[k][m] != a[k+1] + b[m+1]){
                    wrong = true;
                    break;
                }
                // c[2][2] かつ　wrongフラグが立っていなかったらクリアフラグを立てる
                else if (k == 2 && m == 2 && !wrong){
                    clear = true;
                    break;
                }
            }
        }
    }

    if (!clear)  return cout << "No" << endl, 0;
    else return cout << "Yes" << endl, 0;



    return 0;
}
