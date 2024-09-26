#include <bits/stdc++.h>
using namespace std;
using ll = long long;



int main(){
    int N, Y;
    cin >> N >> Y;

    
    for (int a = 0; a <= N; ++a){
        for (int b = 0; b <= N - a; ++b){
            int c = N - (a + b);
            if(10000*a + 5000*b + 1000*c == Y){
                cout << a << " " << b << " " << c <<endl;
                return 0;
            }
            else if (10000*a + 5000*b + 1000*c > Y) break;
        }
    }

    cout << "-1" << " " << "-1" << " " << "-1" <<endl;
    return 0;
}
