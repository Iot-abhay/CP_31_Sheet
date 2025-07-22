/***************************************************************
 * Problem    : B. NIT Destroys the Universe (Codeforces Global Round 21)
 * Author     : Abhay Palway
 * Date       : 22 July 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== SOLUTION START =====================*/

void solve()
{
    long long n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int cnt0=0;

    for (int i = 0; i < n; i++)
    {
        if(v[i]==0) cnt0++;
    }
    bool flag=false;
    int l=0;
    int r=n-1;
    while(v[l]==0) l++;
    while(v[r]==0) r--;
    for (int i = l; i <=r; i++)
    {
        if(v[i]==0) flag=true;
    }
    if(cnt0==n) cout<<0<<endl;
    else if(flag==false) cout<<1<<endl;
    else cout<<2<<endl;
    
}
/*================== SOLUTION END =====================*/
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}