/***************************************************************
 * Problem    : B. Make AP (Codeforces Round 764 (Div. 3))
 * Author     : Abhay Palway
 * Date       : 31 July 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== MACROS =====================*/
#define ll long long
#define vi vector<int>
#define um_ll unordered_map<long long, long long>

/*================== START =====================*/

void solve() {
    ll a, b, c;
    cin >> a >> b >> c;
    bool check = false;

    ll new_a = 2 * b - c;
    if (new_a/a > 0 && new_a % a == 0) check = true;

    if ((a + c) % 2 == 0) {
        ll new_b = (a + c) / 2;
        if (new_b/b > 0 && new_b % b == 0) check = true;
    }

    ll new_c = 2 * b - a;
    if (new_c/c > 0 && new_c % c == 0) check = true;
    cout << (check ? "YES\n" : "NO\n");
}

/*================== END =====================*/

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
