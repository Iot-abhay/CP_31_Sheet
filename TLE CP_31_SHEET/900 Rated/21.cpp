/***************************************************************
 * Problem    : B. Make it Divisible by 25 (Codeforces Round 748 (Div. 3))
 * Author     : Abhay Palway
 * Date       : 10 August 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== MACROS =====================*/
#define ll long long
#define vi vector<int>
#define um_ll unordered_map<long long, long long>

/*================== START =====================*/

int find_ans(string n, string x){
    int cnt=0;
    int idx=x.size()-1;
    for(int i=n.size()-1;i>=0;i--){
        if(n[i]==x[idx]){
            idx--;
            if(idx<0) break;
        }
        else cnt++;
    }
    if(idx>=0) cnt=INT_MAX;
    return cnt;
}

void solve(){
    string s;
    cin>>s;
    vector<string> v={"00","25","50","75"};
    int ans=INT_MAX;
    for (auto x : v) {
        ans=min(ans,find_ans(s,x));
    }
    cout << ans << endl;
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
