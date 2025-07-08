/***************************************************************
 * Problem    : A. Make it Beautiful (Educational Codeforces Round 141 (Div. 2))
 * Author     : Abhay Palway
 * Date       : 06 June 2025
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
    }
    sort(v.begin(), v.end());
    if (v[0] == v[n - 1])
    {
        cout << "NO\n";
        continue;
    }

    cout << "YES\n";
    vector<int> ans;
    ans.push_back(v[n - 1]);
    ans.push_back(v[0]);

    for (int i = 1; i < n - 1; i++)
    {
        ans.push_back(v[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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
    return 0;
}
