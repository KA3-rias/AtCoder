#include <bits/stdc++.h>
using namespace std;

const int MAX = 100000; // Nの最大値

int main() {
    // N 個の県, M 個の市
    int N, M;
    cin >> N >> M;


    // <<所属県, year>, 市の順番(i)>を記憶している
    static pair<pair<int, int>, int> year_shi[MAX];
    // 求めた番号を記録する
    static pair<int, int> num[MAX];


    for (int i = 0;i < M; ++i) {
        int a;
        int b;
        cin >> a >> b;
        // make_pair を重ねても良いという発想よ！！
        year_shi[i] = make_pair( make_pair(a, b), i);
    }
		// これでMの範囲内のaの小さい順→同値ならbの小さい順にソートされるよ
    sort(year_shi, year_shi + M);

    // c の値を更新します。もし現在の都市と前の都市が同じ県 (P) に属しているなら、c をインクリメントします。そうでない場合は c を 1 にリセットします。
    for (int i = 0, c = 1; i < M; ++i, c = i < M and year_shi[i - 1].first.first == year_shi[i].first.first ? c + 1 : 1){
        //num 配列に、都市の県番号 (P) とその県内での連番 (c) を記録します。
        num[year_shi[i].second] = make_pair(year_shi[i].first.first, c);
    }
    for (int i = 0; i < M; ++i){
		    //// 0埋め
        printf("%06d%06d\n", num[i].first, num[i].second);
    }


    return 0;
}

