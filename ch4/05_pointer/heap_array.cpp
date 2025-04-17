#include <bits/stdc++.h>
using namespace std;

int main() {
  uint32_t *p;

  p = new uint32_t[10];

  uint32_t *tmp = p;
  for (int i = 0; i < 10; i++) {
    *tmp = i;
    tmp++;
  }

  tmp = p;
  for (int i = 0; i < 10; i++) {
    cout << *tmp << endl;
    tmp++;
  }

  delete[] p;
}
