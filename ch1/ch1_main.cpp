#include <bits/stdc++.h>
using namespace std;

int sum(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sum(n-1);
}

int main(void) {
    cout << sum(3) << endl;
}

