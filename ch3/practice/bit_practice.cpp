#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  bool ans = false;

  // すべての選び方を試して、総和がKになるものがあるかを調べる
  // Nは最大20個
  for (int tmp = 0; tmp < (1 << 20); tmp++) {
    bitset<20> s(tmp);

    // ビット列の1のビットに対応する整数を選んだとして総和を求める
    // 与えられたN個の数字の全ての組み合わせで足し算をする
    int sum = 0;
    for (int i = 0; i < N; i++) {
      if (s.test(i)) {
        sum += A.at(i);
      }
    }

    if (sum == K) {
      ans = true;
    }
  }
  
  if (ans) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
