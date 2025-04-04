#include <bits/stdc++.h>
using namespace std;

int count_report_num(vector<vector <int>> &children, int x) {
    if (children.at(x).size() == 0) {
        return 1;
    }

    int total_recieve_page = 0;
    for (int c: children.at(x)) {
        total_recieve_page += count_report_num(children, c);
    }
    total_recieve_page += 1;

    return total_recieve_page;
}

int main() {
    int N;
    cin >> N;

    vector<int> p(N);
    p.at(0) = -1;
    for (int i = 1; i < N; i++) {
        cin >> p.at(i);
    }

    vector<vector<int>> children(N);
    for (int i = 1; i < N; i++) {
        int parent = p.at(i);
        children.at(parent).push_back(i);
    }

    for (int i = 0; i < N; i++) {
        cout << count_report_num(children, i) << endl;
    }
}
