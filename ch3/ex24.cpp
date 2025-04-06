#include <bits/stdc++.h>
using namespace std;

struct Clock {
  int hour;
  int minute;
  int second;

  void set(int h, int m, int s) {
    hour = h;
    minute = m;
    second = s;
  }

  string to_str(void) {
    string ret;

    if (!(0 <= hour && hour <= 23 && 
          0 <= minute && minute <= 59 && 
          0 <= second && second <= 59)) {
      return "error";
    }

    if (hour < 10) {
      ret += "0";
    }
    ret += to_string(hour);

    ret += ":";

    if (minute < 10) {
      ret += "0";
    }
    ret += to_string(minute);

    ret += ":";

    if (second < 10) {
      ret += "0";
    }
    ret += to_string(second);

    return ret;
  }

  // void shift(int diff_second) {
  //   if (diff_second < 0) {
  //     second -= diff_second;
  //   } else {
  //     second += diff_second;
  //   }
  // }

};


int main() {
  int hour, minute, second;
  cin >> hour >> minute >> second;
  int diff_second;
  cin >> diff_second;

  Clock clock;

  clock.set(hour, minute, second);

  cout << clock.to_str() << endl;

  // clock.shift(diff_second);

  // cout << clock.to_str() << endl;

}
