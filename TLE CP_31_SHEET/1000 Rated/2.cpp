/***************************************************************
 * Problem    : C. Raspberries (Codeforces Round 905 (Div. 3))
 * Author     : Abhay Palway
 * Date       : 18 August 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== MACROS =====================*/
#define ll long long
#define vi vector<int>
#define um_ll unordered_map<long long, long long>

/*================== START =====================*/
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    int even=0,ans=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        if(v[i]%2==0) even++;
        if(v[i]%k==0)
        ans=0;
        ans=min(ans,abs(k-v[i]%k));
    }
    if(k==4){
        if(even>=2) ans=min(ans,0);
        else if(even==1) ans=min(ans,1);
        else if(even==0) ans=min(ans,2);
    }
    cout<<ans<<endl;
}

/*================== END =====================*/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }
}
