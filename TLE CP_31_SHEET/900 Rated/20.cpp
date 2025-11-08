/***************************************************************
 * Problem    : A. AB Balance (Educational Codeforces Round 116 (Div. 2))
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
    string s;
    cin>>s;
    int n=s.size();
    if(s[0]!=s[n-1]){
        if(s[0]=='a'){
            s[0]='b';
        }else{
            s[0]='a';
        }
    }
    cout<<s<<endl;
}

/*================== END =====================*/

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
