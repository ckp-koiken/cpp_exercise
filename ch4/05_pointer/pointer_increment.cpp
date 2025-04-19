#include <bits/stdc++.h>
using namespace std;

int main() {
  int *p = new int[10];
  int *q = nullptr;

  for (int i = 0; i < 10; i++) {
    q = p + i;
    *q = i;
  }

  q = p;
  for (int i = 0; i < 10; i++) {
    cout << *q << endl;
    q++;
  }

  delete[] p;
}
