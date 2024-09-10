#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
    int D;
    cin >> D;

    int k = 25-D;
    cout << "Christmas";
    if (k == 0) return 0;

    for (int i = 0; i < k; ++i){
        cout << " Eve";
    }

    return 0;
}

