/***************************************************************
 * Problem    : B. Array merging (Codeforces Round 875 (Div. 1))
 * Author     : Abhay Palway
 * Date       : 20 August 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== MACROS =====================*/
#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define vl vector<long long>
#define vpii vector<pair<int, int>>
#define vpll vector<pair<long long, long long>>
#define um_ll unordered_map<long long, long long>
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

/*================== START =====================*/
void solve()
{
    ll n;
    cin >> n;
    vl a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    vl longest_a(2*n+1,0), longest_b(2*n+1,0);
    ll cnt=1;
    for (int i = 1; i < n; i++)
    {
        if(a[i]==a[i-1]) cnt++;
        else{
            longest_a[a[i-1]]=max(longest_a[a[i-1]],cnt);
            cnt=1;
        }
    }
    longest_a[a[n-1]]=max(longest_a[a[n-1]],cnt);
    cnt=1;
    for (int i = 1; i < n; i++)
    {
        if(b[i]==b[i-1]) cnt++;
        else{
            longest_b[b[i-1]]=max(longest_b[b[i-1]],cnt);
            cnt=1;
        }
    }
    longest_b[b[n-1]]=max(longest_b[b[n-1]],cnt);
    ll maxf = -1;
    for(int i=1;i<=2*n;i++){
        maxf=max(maxf,longest_a[i]+longest_b[i]);
    }
    cout<<maxf<<endl;
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
