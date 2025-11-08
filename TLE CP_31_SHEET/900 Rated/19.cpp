/***************************************************************
 * Problem    : B. Odd Grasshopper (Codeforces Round 753 (Div. 3))
 * Author     : Abhay Palway
 * Date       : 1 August 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== MACROS =====================*/
#define ll long long
#define vi vector<int>
#define um_ll unordered_map<long long, long long>

/*================== START =====================*/

void solve() {
    ll pos, moves;
    cin >> pos >> moves;
    ll final_pos=0;
    if(moves%4==0){
        final_pos=0;
    }else if(moves%4==1){
        final_pos-=moves;
    }else if(moves%4==2){
        final_pos=1;
    }else if(moves%4==3){
        final_pos=moves+1;
    }
    if(pos%2==0) cout<<pos+final_pos<<endl;
    else cout<<pos-final_pos<<endl;
}

/*================== END =====================*/

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
