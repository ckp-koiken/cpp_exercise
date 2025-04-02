#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    // 市名と点数ペア、そのペアとレストラン番号のペアの
    // 配列を作る
    vector<pair<pair<string, int>, int>> data(N);

    for (int i = 0; i < N; i++) {
        string s;
        int p;
        cin >> s >> p;
        data.at(i) = make_pair(make_pair(s, -p), i + 1);
        // 点数が高い順にソートしたいので、
        // 点数は-1倍する
    }

    sort(data.begin(), data.end());

    for (int i = 0; i < N; i++) {
        cout << data.at(i).second << endl;
    }
}