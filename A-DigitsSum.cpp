#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// 桁の総和
int calc_sum_digits(int n){
    int sum_digit = 0;
    for (; n > 0; n /= 10) sum_digit += n % 10;
    return sum_digit;
}

int main(){
    int N;
    cin >> N;

    int ans = 1000000;
    int sum;
    for (int i = 1; i <= N/2; ++i){
        int a = 0; int b = 0;
        a = N - i;
        b = N - a;
        sum = calc_sum_digits(a) + calc_sum_digits(b);
        ans = min(ans, sum);
    }
    


    cout << ans << endl;
    return 0;
}
