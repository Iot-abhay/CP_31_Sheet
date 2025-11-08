/***************************************************************
 * Problem    : A. Strange Partition (Codeforces Round 694 (Div. 2))
 * Author     : Abhay Palway
 * Date       : 5 August 2025
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
    ll n, x;
    cin >> n >> x;

    vector<ll> vl(n);

    for (ll &it : vl) {
        cin >> it;
    }

    ll max_sum = 0, total = 0;

    for (int i = 0; i < n; i++) {
        max_sum += (vl[i] + x - 1) / x;
        total += vl[i];
    }

    ll min_sum = (total + x - 1) / x; 

    cout << min_sum << " " << max_sum << endl;
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
