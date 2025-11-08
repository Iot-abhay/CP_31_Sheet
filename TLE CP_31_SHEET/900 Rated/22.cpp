/***************************************************************
 * Problem    : B. Luntik and Subsequences (Codeforces Round 759 (Div. 2))
 * Author     : Abhay Palway
 * Date       : 8 August 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== MACROS =====================*/
#define ll long long
#define vi vector<int>
#define um_ll unordered_map<long long, long long>
#define endl "\n"

/*================== START =====================*/

void solve(){
    ll n,x;
    cin >> n;
    ll cnt0 = 0, cnt1 = 0;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (x == 0) cnt0++;
        if (x == 1) cnt1++;
    }
        cout << (1ll << cnt0) * (ll)cnt1 << endl;    
}

/*================== END =====================*/

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
