#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    // vector<int> vec = {A, B, C};
    // sort(vec.begin(), vec.end());
    // cout << vec.at(2) - vec.at(0) << endl;

    int maximum = max(max(A, B), C);
    int minimum = min(min(A, B), C);
    cout << maximum - minimum << endl;
}
