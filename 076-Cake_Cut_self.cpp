#include <bits/stdc++.h>
using namespace std;

int main() {

    // 入力
    long long N;
    cin >> N;
    vector <long long> A(N);

    long long sum = 0;
    for (int i = 0; i < N; ++i){
        cin >> A[i];
        sum += A[i];
    }

    // 合計が10で割り切れない場合はNo
    if (sum % 10 != 0) {
        cout << "No" << endl;
        return 0;
    }

    // しゃくとり法の実装

    long long goal = sum / 10;
    sum = 0;
    int right = 0;

    // iをleftに変更
    for (int left = 0; left < N; ++left){
        // 操作する直前に判定する
        //sum がgoal未満のあいだ 
        while (sum  < goal){
            sum += A[right];
            // 右側の位置を前進
            ++right;
            //right の位置がN以上になったら0に戻すことでループを表現
            if (right >= N) right -= N;
            //別の表現　right = (right + 1) % N;
        }

        //goalと同じになったら成功
        if (sum == goal) {
            cout << "Yes" << endl;
            return 0;
        }
        // left と rightが同じ位置に来たらrightを前進
        if (left == right) ++right;
        // left と rightが違うなら 次のループでleftは1つ右に移動するので
        // 現在の位置は範囲から外れる よって現在の数値を引く
        else sum -= A[left];
    }

    cout << "No" << endl;
    return 0;
}

