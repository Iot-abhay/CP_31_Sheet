/***************************************************************
 * Problem    : A. Three Indices (Educational Codeforces Round 91 (Div. 2))
 * Author     : Abhay Palway
 * Date       : 6 August 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== MACROS =====================*/
#define ll long long
#define vi vector<int>
#define um_ll unordered_map<long long, long long>

/*================== START =====================*/

void solve()
{
    ll n;
    cin >> n;

    vector<ll> p(n);
    for (ll &it : p) {
        cin >> it;
    }

    for (int i = 1; i < n - 1; i++) {
        if (p[i - 1] < p[i] && p[i] > p[i + 1]) {
            cout << "YES" << endl;
            cout << i << " " << i + 1 << " " << i + 2 << endl;  
            return;
        }
    }

    cout << "NO" << endl;
}

/*================== END =====================*/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
