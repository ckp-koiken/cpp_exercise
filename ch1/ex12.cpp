#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    int size = S.size();
    int num = 1;
    for (int i = 1; i < size; i++) {
        if (S.at(i) == '+') {
            num++;
        } else if (S.at(i) == '-') {
            num--; 
        }
    }
    cout << num << endl;
}
