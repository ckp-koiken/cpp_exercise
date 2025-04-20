#include <bits/stdc++.h>
using namespace std;

void f(int &ref) {
  ref = 2;
}

void g(int *ptr) {
  *ptr = 2;
}

int main() {
  int x = 1;
  f(x);
  cout << x << endl;

  int y = 1;
  g(&y);
  cout << y << endl;
}
