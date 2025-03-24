#include <bits/stdc++.h>
using namespace std;
void func() {
    int sum = 0;
    bool finished = false;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            sum += i * j;

            if (sum > 1000) {
                cout << i << ", " << j << endl;
                cout << sum << endl;
                return;
            }
        }
    }
}

int main() {
    func();
}
