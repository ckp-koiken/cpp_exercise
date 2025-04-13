#include <bits/stdc++.h>
using namespace std;

// int square_int(int x) {
//   return x * x;
// }
// 
// double square_double(double x) {
//   return x * x;
// }

template <typename T>
T square(T x) {
  return x * x;
}

int main() {
  int a = 3;
  double b = 1.2;

  cout << square<int>(a) << endl;
  cout << square<double>(b) << endl;

  // 引数の型から推定できる場合は省略できる
  cout << square(a) << endl;
  cout << square(b) << endl;
}