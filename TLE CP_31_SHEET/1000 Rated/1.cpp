/***************************************************************
 * Problem    : B. Swap and Delete (Educational Codeforces Round 160 (Div. 3))
 * Author     : Abhay Palway
 * Date       : 17 August 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== MACROS =====================*/
#define ll long long
#define vi vector<int>
#define um_ll unordered_map<long long, long long>

/*================== START =====================*/
void solve(){
    string s;
    cin>>s;
    int n=s.size();
    int c1=0,c0=0,t=0;
    for(char ch:s){
        if(ch=='1') c1++;
    }
    c0=n-c1;
    for(char ch:s){
        if(ch=='1'  && c0>0){
            c0--;
            t++;
        }else if(ch=='0' && c1>0){
            c1--;
            t++;
        }else break;
    }
    cout<<n-t<<endl;

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
