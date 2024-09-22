#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    char c;
    cin >> c;
    string vowel = "aeiou";
    //文字列からcが見つからなかった場合(npos)
    if (vowel.find(c) == string::npos) return cout << "consonant" << endl, 0;
    cout <<  "vowel" << endl;

    return 0;
}
