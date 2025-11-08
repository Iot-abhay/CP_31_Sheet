/***************************************************************
 * Problem    : A. Helmets in Night Light (Codeforces Round 902 (Div. 1))
 * Author     : Abhay Palway
 * Date       : 19 August 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== MACROS =====================*/
#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define vpii vector<pair<int, int>>
#define vpll vector<pair<long long, long long>>
#define um_ll unordered_map<long long, long long>
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

/*================== START =====================*/
void solve()
{
    ll n, p;
    cin >> n >> p;
    vpll v(n);
    vi a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        v[i] = {b[i], a[i]};
    }
    sort(all(v));
    ll min_cost = p, shared = 1;
    for (auto it : v)
    {
        ll cost = it.first, left = it.second;
        if (cost >= p) break;
        if(shared+left>n){
            min_cost+=(n-shared)*cost;
            shared=n;
            break;
        }else{
            min_cost+=left*cost;
            shared+=left;
        }
    }
    min_cost+=(n-shared)*p;
    cout<<min_cost<<endl;
}

/*================== END =====================*/

int main()
{
    fast_io;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
