/***************************************************************
 * Problem    : B. Bogosort (Educational Codeforces Round 83 (Div. 2))
 * Author     : Abhay Palway
 * Date       : 08 Novemeber 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== MACROS =====================*/
#define ll long long
#define int int64_t
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define rsrt(x) sort(rall(x))
#define vi vector<int>
#define vl vector<long long>
#define vpii vector<pair<int, int>>
#define vpll vector<pair<long long, long long>>
#define um_ll unordered_map<long long, long long>
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

/*================== START =====================*/
void solve()
{
    int n;
    cin>>n;
    vi v(n);
    for(auto &it:v) cin>>it;
    rsrt(v);
    for(auto it:v) cout<<it<<" ";
    cout<<endl;
}

/*================== END =====================*/

int32_t main()
{
    fast_io;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
