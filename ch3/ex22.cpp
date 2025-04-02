#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, a, b;
    cin >> N;

    pair<int, int> p(0, 0);
    vector<pair<int, int>> vec(N);

    for (int i = 0; i < N; i++) {
        cin >> vec.at(i).second >> vec.at(i).first;
    }
    sort(vec.begin(), vec.end());

    for (pair<int, int> &t : vec) {
        int tmp;
        tmp = t.second;
        t.second = t.first;
        t.first = tmp;
        cout << t.first << " " << t.second << endl;
    }
}