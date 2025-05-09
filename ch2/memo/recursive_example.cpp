#include <bits/stdc++.h>
using namespace std;

int complete_time(vector<vector<int>> &children, int x) {
    // ベースケース
    if (children.at(x).size() == 0) {
        return 0;
    }

    // 再帰ステップ
    int max_receive_time = 0;  // 受け取った時刻の最大値
    // x番の組織の子組織についてループ
    for (int c : children.at(x)) {

        // (子組織cのもとに揃った時刻 + 1)の時刻にcからの報告書を受け取る
        int receive_time = complete_time(children, c) + 1;

        // 受け取った時刻の最大値 = 揃った時刻 なので最大値を求める
        max_receive_time = max(max_receive_time, receive_time);
    }
    return max_receive_time;
}

int main() {
    int N;
    cin >> N;

    // 各組織の親組織を示す配列
    vector<int> p(N);
    p.at(0) = -1; // 0番組織の親組織は存在しないので-1を入れておく
    for (int i = 1; i < N; i++) {
        cin >> p.at(i);
    }

    // 組織の関係から2次元配列を作る
    vector<vector<int>> children(N);  // ある組織の子組織の番号一覧 N*0の二次元配列
    for (int i = 1; i < N; i++) {
        int parent = p.at(i); // i番の親組織の番号
        children.at(parent).push_back(i);  // parentの子組織一覧にi番を追加
    }
    
    // 0番の組織の元に報告書が揃う時刻を求める
    cout << complete_time(children, 0) << endl;
}
