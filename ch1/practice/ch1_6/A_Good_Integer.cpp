#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int n1000 = N / 1000;
    int n100 = (N - n1000*1000) / 100;
    int n10 = (N - n1000*1000 - n100*100) / 10;
    int n1 = N - n1000*1000 - n100*100 - n10*10;

    if (n1000 == n100 && n1000 == n10)
        cout << "Yes" << endl;
    else if (n100 == n10 && n100 == n1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
