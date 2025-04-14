#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a = {1, 2, 3, 5};
  auto itr = find(a.begin(), a.end(), 3);

  if (itr == a.end()) {
    cout << "not found" << endl;
  } else {
    int idx = distance(a.begin(), itr);
    cout << "a[" << idx << "] = " << *itr << endl;
  }
}