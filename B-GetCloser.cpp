#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int A, B;
    cin >> A >> B;

    double pow = sqrt(A*A + B*B);

    double a = A/pow;
    double b = B/pow;
    printf("%.12f\n",a);
    printf("%.12f\n",b);
    
    return 0;
}
