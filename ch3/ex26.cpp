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
  string name, equal;
  cin >> name >> equal;
  return name;
}

// int式の項を1つ読み取る
// 数字ならその値を返し、そうでないなら変数として解釈し変数の値を返す
int read_int(map<string, int> &var_int) {
  string val;
  cin >> val;

  return isdigit(val.at(0))
    ? stoi(val) // 数値の場合
    : var_int.at(val);  // 変数の場合
}

// int式全体を読み取って計算する
int calc_int(map<string, int> &var_int) {
  string symbol = ""; // 演算子を受け取る変数
  int result = 0;

  // 式の終わりである";"が出てくるまで読み続ける
  while (symbol != ";") {
    int val = read_int(var_int);

    // 記号が入力されていない場合
    if (symbol == "") {
      result = val;
    }

    // 足し算の場合
    if (symbol == "+") {
      result += val;
    }

    // 引き算の場合
    if (symbol == "-") {
      result -= val;
    }

    cin >> symbol;
  }

  return result;
}

// vec値を読み取る
// 最初の"["は読み取ってある前提
vector<int> read_vec_val(map<string, int> &var_int) {
  vector <int> result;  // 結果を保持
  string symbol = ""; // vec値中の記号を受け取る

  // vec値の終わりである"]"が出てくるまで読む
  while (symbol != "]") {
    // 数値を1つ読み取ってvecに追加
    int val = read_int(var_int);
    result.push_back(val);

    // symbolには","か"]"が入力される
    cin >> symbol;
  }

  return result;
}

// vecの項を1つ読みとる
// vec値ならその値を返し、そうでないなら変数として解釈し変数の値を返す
vector<int> read_vec(map<string, int> &var_int, map<string, vector<int>> &var_vec) {
  string val;
  cin >> val;

  // "["かどうかでvec値か変数かを判定
  return val == "["
    ? read_vec_val(var_int) // vec値の場合
    : var_vec.at(val); // 変数の場合
}

// vec式全体を読み取って計算する
vector<int> calc_vec(map<string, int> &var_int, map<string, vector<int>> &var_vec){
  string symbol;  // 演算子を受け取る
  vector<int> result; // 結果を保持

  // 式の終わりである";"が出てくるまで読む
  while (symbol != ";") {
    // 項を一つ読む
    vector<int> vec = read_vec(var_int, var_vec);

    // 記号がなにも入力されなければそのまま結果に代入
    if (symbol == "") {
      result = vec;
    }

    // 足し算の場合
    if (symbol == "+") {
      for (int i = 0; i < result.size(); i++) {
        result.at(i) += vec.at(i);
      }
    }

    // 引き算の場合
    if (symbol == "-") {
      for (int i = 0; i < result.size(); i++) {
        result.at(i) -= vec.at(i);
      }
    }

    // symbolには"+"、"-"、";"のいずれかが入力される
    cin >> symbol;

  }
  return result;
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