#include <bits/stdc++.h>
using namespace std;


int main(){
    int N;
    cin >> N;

    if (N <= 125)  return cout << 4 << endl, 0;
    else if (126 <= N && N <= 211)  return cout << 6 << endl, 0;
    else if (212 <= N)  return cout << 8 << endl, 0;


    return 0;
}
