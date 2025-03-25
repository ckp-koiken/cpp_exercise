#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);

    for (int i = 0; i < M; i++) {
        cin >> A.at(i) >> B.at(i);
    }

    // N*Mのchar型の2次元配列の全てを'-'で初期化
    vector<vector<char>> data(N, vector<char>(N, '-'));

    for (int i = 0; i < M; i++) {
        data.at(A.at(i)-1).at(B.at(i)-1) = 'o';  // AはBに勝った
        data.at(B.at(i)-1).at(A.at(i)-1) = 'x';  // BはAに勝った
    }
    
    // MEMO: 最初から添字のために1減らしておくのもあり
    // for (int i = 0; i < M; i++) {
    //     A.at(i)--; B.at(i)--;
    //     data.at(A.at(i)).at(B.at(i)) = 'o';
    //     data.at(B.at(i)).at(A.at(i)) = 'x';
    // }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << data.at(i).at(j);
            if (j == N - 1) {
                cout << endl;  // 行末なら改行
            } else {
                cout << " ";   // 行末でないなら空白を出力
            }
        }
    }
}
