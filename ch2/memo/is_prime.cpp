#include <bits/stdc++.h>
using namespace std;

// i ~ N-1の範囲にNの約数が存在するのか
bool has_divisor(int N, int i) {
    if (i == N) {
        return false;
    }

    if (N % i == 0) {
        return true;
    }

    return has_divisor(N, i + 1);
}

// 素数かどうかを判定
bool is_prime(int N) {
    if (N == 1) {
        return false;
    } else if (N == 2) {
        return true;
    } else {
        // 2~(N-1)の範囲に約数がなければ素数
        return !has_divisor(N, 2);
    }
}

int main() {
    cout << is_prime(1) << endl;
    cout << is_prime(2) << endl;
    cout << is_prime(12) << endl;
    cout << is_prime(13) << endl;
    cout << is_prime(57) << endl;
}
