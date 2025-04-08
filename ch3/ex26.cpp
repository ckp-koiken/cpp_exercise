#include <bits/stdc++.h>
using namespace std;

// vec値を出力
void print_vec(vector<int> vec) {
  cout << "[ ";
  for (int i = 0; i < vec.size(); i++) {
    cout << vec.at(i) << " ";
  }
  cout << "]" << endl;
}

// 変数名を読み取りイコールを読み飛ばす
string read_name() {

}

// int式の項を1つ読み取る
// 数字ならその値を返し、そうでないなら変数として解釈し変数の値を返す
int read_int(map<string, int> &var_int) {

}

// int式全体を読み取って計算する
int calc_int(map<string, int> &var_int) {

}

// vec値を読み取る
// 最初の"["は読み取ってある前提
vector<int> read_vec_val(map<string, int> &var_int) {

}

// vecの項を1つ湯尾見とる
// vec値ならその値を返し、そうでないなら変数として解釈し変数の値を返す
vector<int> read_vec(map<string, int> &var_int, map<string, vector<int>> &var_vec) {

}

// vec式全体を読み取って計算する
vector<int> calc_vec(map<string, int> &var_int, map<string, vector<int>> &var_vec){

}

int main() {
  // 命令の行数
  int N;
  cin >> N;
  
  map<string, int> var_int; // intの変数を管理するmap
  map<string, vector<int>> var_vec; // vectorの変数を管理するmap

  // 行数分の処理
  for (int i = 0; i < N; i++) {
    // 命令を受け取る
    string s;
    cin >> s;

    // intの処理
    if (s == "int") {
      string name = read_name();
      var_int[name] = calc_int(var_int);
    }

    // vecの処理
    if (s == "vec") {
      string name = read_name();
      var_vec[name] = calc_vec(var_int, var_vec);
    }

    // print_intの処理
    if (s == "print_int") {
      cout << calc_int(var_int) << endl;
    }

    // print_vecの処理
    if (s == "print_vec") {
      print_vec(calc_vec(var_int, var_vec));
    }
  }

}