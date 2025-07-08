/***************************************************************
 * Problem    : A. Walking Master (Codeforces Round 858 (Div. 2))
 * Author     : Abhay Palway
 * Date       : 08 June 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== SOLUTION START =====================*/

void solve() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    if (b > d) {
        cout << "-1"<<endl;
        return;
    }
    long long steps = d - b;
    a += steps;
    if (a < c) {
        cout << "-1"<<endl;
        return;
    }
    steps += (a - c);

    cout << steps << endl;
}


/*================== SOLUTION END =====================*/

int main() {
    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
