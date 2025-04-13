#include <bits/stdc++.h>
using namespace std;

template <int INDEX1, int INDEX2>
void tuple_swap(tuple<int, int, int> &x) {
  swap(get<INDEX1>(x), get<INDEX2>(x));
}

int main() {
  tuple<int, int, int> x = make_tuple(1, 2, 3);

  tuple_swap<0, 2>(x);
  cout << get<0>(x) << ", " << get<1>(x) << ", " << get<2>(x) << endl;

  tuple_swap<0, 1>(x);
  cout << get<0>(x) << ", " << get<1>(x) << ", " << get<2>(x) << endl;
}