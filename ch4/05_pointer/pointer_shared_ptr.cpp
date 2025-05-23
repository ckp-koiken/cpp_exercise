#include <bits/stdc++.h>
using namespace std;

int main() {
  shared_ptr<int> p3;
  {
    shared_ptr<int> p1 = make_shared<int>(123);
    {
      shared_ptr<int> p2 = p1;  // p2も所有権を共有
      *p2 += 1;
      p3 = p2;  // p3も所有権を共有
    }  // p2が所有権を手放す（p1、p3が共有している状態）
    *p1 += 1;
  }  // p1が所有権を手放す（p3が持っている状態）
  *p3 += 1;
  cout << *p3 << endl;
}  // 所有者がいなくなり、メモリが解放される