#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int sum = 0;
    vector<int> vec(N);
    for (int i = 0; i < N; i++) {
        cin >> vec.at(i);
        sum += vec.at(i);
    }
    int avg = sum/N;

    for (int i = 0; i < vec.size(); i++) {
        avg - vec.at(i);
        if (avg > vec.at(i)) {
            cout << avg - vec.at(i) << endl;
        } else {
            cout << vec.at(i) - avg << endl;
        }
    }
}
