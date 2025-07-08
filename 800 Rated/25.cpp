/***************************************************************
 * Problem    : C. Prepend and Append (Codeforces Round 849 (Div. 4))
 * Author     : Abhay Palway
 * Date       : 10 June 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== SOLUTION START =====================*/

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l = 0, r = n - 1, ans = n;
    while (s[l] != s[r] && ans > 0)
    {
        l++;
        r--;
        ans -= 2;
    }
    cout << ans << endl;
}

/*================== SOLUTION END =====================*/

int main()
{
    int t=1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}