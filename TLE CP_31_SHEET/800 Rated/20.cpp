/***************************************************************
 * Problem    : A. Twin Permutations (Codeforces Round 875 (Div. 2))
 * Author     : Abhay Palway
 * Date       : 26 June 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== SOLUTION START =====================*/

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            b[i] = n + 1 - a[i];
        }

        for (int i = 0; i < n; ++i) {
            cout << b[i] << " ";
        }
        cout << "\n";
    }
}

/*================== SOLUTION END =====================*/

int main() {
    solve();
    return 0;
}
