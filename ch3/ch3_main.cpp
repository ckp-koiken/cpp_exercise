#include <bits/stdc++.h>
using namespace std;

struct MyPair {
  int x;
  string y;

  MyPair() : x(123), y("hello") {
  }
};

int main() {
  MyPair p;
  cout << "p.x = " << p.x << endl;
  cout << "p.y = " << p.y << endl;
}
