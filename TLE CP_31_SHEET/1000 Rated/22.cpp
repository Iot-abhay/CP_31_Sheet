/***************************************************************
 * Problem    : A. Add and Divide (Codeforces Round 701 (Div. 2))
 * Author     : Abhay Palway
 * Date       : 25 August 2025
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
    ll a,b;
    cin>>a>>b;
    if(!a) cout<<0<<endl;
    ll ans=INT_MAX;
    for(int i=0;i<32;i++){
        ll cnt=i;
        ll b2=b+i;
        if(b2==1) continue;
        ll a2=a;
        while(a2>0){
            a2/=b2;
            cnt++;
        }
        ans=min(ans,cnt);
    }
    cout<<ans<<endl;
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
