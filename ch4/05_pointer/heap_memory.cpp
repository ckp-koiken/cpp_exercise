#include <bits/stdc++.h>
using namespace std;

int main() {
  uint32_t *p;

  p = new uint32_t;

  *p = 123;
  cout << *p << endl;

  delete p;
}
