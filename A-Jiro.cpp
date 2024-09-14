#include <bits/stdc++.h>
using namespace std;

int main() {
    char AB,AC,BC;
    cin >> AB >> AC >> BC;

    if (AB == '<' && AC == '>') return cout << "A" << endl, 0;
    if (AB == '>' && AC == '<') return cout << "A" << endl, 0;

    if (AB == '<' && AC == '<' && BC == '<') return cout << "B" << endl, 0;
    if (AB == '<' && AC == '<' && BC == '>') return cout << "C" << endl, 0;

    if (AB == '>' && AC == '>' && BC == '<') return cout << "C" << endl, 0;
    if (AB == '>' && AC == '>' && BC == '>') return cout << "B" << endl, 0;

    cout << "Yes" << endl;
    return 0;
}
