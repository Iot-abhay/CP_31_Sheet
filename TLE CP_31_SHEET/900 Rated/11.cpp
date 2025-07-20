/***************************************************************
 * Problem    : B. Not Dividing (Codeforces Round 856 (Div. 2))
 * Author     : Abhay Palway
 * Date       : 20 July 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== SOLUTION START =====================*/

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i]==1) v[i]++;
    }
    for (int i = 0; i < n-1; i++)
    {
        if(v[i+1]%v[i]==0) v[i+1]++;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    
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