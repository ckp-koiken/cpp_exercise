#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a = {1, 2, 3};
  for (auto it = a.begin(); it != a.end(); it++) {
    cout << *it << endl;
  }

  vector<int> b = {1, 2, 3};
  int *begin_addr = b.data();
  for (int *ptr = begin_addr; ptr < begin_addr + 3; ptr = ptr + 1) {
    cout << *ptr << endl;
  }
}
