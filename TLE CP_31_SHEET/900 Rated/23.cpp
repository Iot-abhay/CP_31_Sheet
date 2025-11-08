/***************************************************************
 * Problem    : A. Mocha and Math (Codeforces Round 738 (Div. 2))
 * Author     : Abhay Palway
 * Date       : 7 August 2025
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

    vector<ll> v(n);
    for (ll &it : v) {
        cin >> it;
    }
    ll res=v[0];
    for (int i = 1; i < n; i++) {
      res=res&v[i];  
    }

    cout << res << endl;
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
