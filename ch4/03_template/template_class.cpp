#include <bits/stdc++.h>
using namespace std;

template <typename T>
struct Point {
  T x;
  T y;
  void print() {
    cout << "(" << x << ", " << y << ")" << endl;
  }
};

int main() {
  Point<int> p1 = {0, 1};
  p1.print();

  Point<double> p2 = {2.3, 4.5};
  p2.print();
}