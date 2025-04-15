#include <bits/stdc++.h>
using namespace std;

struct A {
  int data;
  void print() {
    cout << data << endl;
  }
};

int main() {
  A a = A { 1 };

  A *p = &a;
  p->print();
  p->data = 2;
  p->print();
}