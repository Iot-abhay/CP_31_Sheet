/***************************************************************
 * Problem    : A. How Much Does Daytona Cost? (Codeforces Round 900 (Div. 3))
 * Author     : Abhay Palway
 * Date       : 26 May 2025
 ****************************************************************/


#include <bits/stdc++.h>
using namespace std;

/*================== SOLUTION START =====================*/

void solve()
{
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }
        if (find(v.begin(), v.end(), k) != v.end()){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
}

/*================== SOLUTION END =====================*/

int main(){
    int t=1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
