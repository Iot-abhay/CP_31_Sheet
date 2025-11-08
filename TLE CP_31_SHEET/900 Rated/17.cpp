/***************************************************************
 * Problem    : B. Array Cloning Technique (Codeforces Round 781 (Div. 2))
 * Author     : Abhay Palway
 * Date       : 30 July 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== MACROS =====================*/
#define ll long long
#define vi vector<int>
#define um_ll unordered_map<long long, long long>

/*================== START =====================*/

void solve(){
    ll n;
    cin >> n;
    vi v(n);
    um_ll mpp;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        mpp[v[i]]++;  
    }

    ll curr_hf = 0;
    for(auto it : mpp){
        curr_hf = max(curr_hf, it.second);
    }

    ll ans = 0;
    while(curr_hf < n){
        ans++; 
        if(2 * curr_hf <= n){
            ans += curr_hf;  
            curr_hf *= 2;
        }else{
            ans += (n - curr_hf);  
            curr_hf = n;
        }
    }

    cout << ans << endl;
}

/*================== END =====================*/

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
