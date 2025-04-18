#include <bits/stdc++.h>
using namespace std;

int main() {
  uint8_t x = 1;
  uint8_t *p = nullptr;
  p = &x;
  *p = 2;
  p = nullptr;
  cout << (int)x << endl;

  if (p) {
    cout << "not nullptr" << endl;
  } else {
    cout << "nullptr" << endl;
  }
}
