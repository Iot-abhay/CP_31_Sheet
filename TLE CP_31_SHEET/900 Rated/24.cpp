/***************************************************************
 * Problem    : A. Exciting Bets (Codeforces Round 730 (Div. 2))
 * Author     : Abhay Palway
 * Date       : 2 August 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== MACROS =====================*/
#define ll long long
#define vi vector<int>
#define um_ll unordered_map<long long, long long>

/*================== START =====================*/

void solve() {
    ll a,b;
    cin >> a >> b;
    if(a==b){
        cout<<0<<" "<<0<<endl;
    }else{
        ll gcd = abs(a-b);
        ll ans = min((a%gcd),gcd-(a%gcd));
        cout << gcd << " " << ans << endl;
    }
}

/*================== END =====================*/

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
