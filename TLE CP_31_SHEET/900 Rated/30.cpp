/***************************************************************
 * Problem    : B. 01 Game (Educational Codeforces Round 90 (Div. 2))
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
    string s;
    cin>>s;
    int c1=count(s.begin(),s.end(),'1'), c0=count(s.begin(),s.end(),'0');
    int comp=min(c1,c0);
    if(comp%2==0) cout<<"NET"<<endl;
    else cout<<"DA"<<endl;
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
