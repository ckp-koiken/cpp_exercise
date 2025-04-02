#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, a, b;
    cin >> N;

    vector<pair<int, int>> vec(N);

    for (int i = 0; i < N; i++) {
        cin >> vec.at(i).second >> vec.at(i).first;
    }

    // 解答例
    // for (int i = 0; i < N; i++) {
    //     int a, b;
    //     cin >> a >> b;
    //     vec.at(i) = make_pair(b, a);
    // }

    sort(vec.begin(), vec.end());

    for (pair<int, int> t : vec) {
        cout << t.second << " " << t.first << endl;
    }

    // 解答例
    // for (int i = 0; i < N; i++) {
    //     int b, a;
    //     tie(b, a) = vec.at(i);
    //     cout << a << " " << b << endl;
    // }
}