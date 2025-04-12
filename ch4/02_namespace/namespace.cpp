#include <bits/stdc++.h>
using namespace std;

namespace A {
  void f() {
    cout << "namespace A" << endl;
  }
}

namespace B {
  void f() {
    cout << "namespace B" << endl;
  }
}

int main() {
  A::f();
  B::f();
}