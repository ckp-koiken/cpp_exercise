#include <bits/stdc++.h>
using namespace std;

namespace A {
  void f() {
    cout << "A::f" << endl;
  }
}

int main() {
  using namespace A;
  f();
}