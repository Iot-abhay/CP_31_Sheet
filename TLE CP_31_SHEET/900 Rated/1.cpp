/***************************************************************
 * Problem    : A. Forked (Codeforces Round 914 (Div. 2))
 * Author     : Abhay Palway
 * Date       : 08 July 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== SOLUTION START =====================*/

void solve()
{
    long long a, b, xK, yK, xQ, yQ;
    cin >> a >> b >> xK >> yK >> xQ >> yQ;
    vector<int> dx = {1, 1, -1, -1};
    vector<int> dy = {1, -1, -1, 1};
    set<pair<int, int>> king, queen;
    for (int i = 0; i < 4; i++)
    {
        king.insert({xK + dx[i] * a, yK + dy[i] * b});
        king.insert({xK + dx[i] * b, yK + dy[i] * a});
        queen.insert({xQ + dx[i] * a, yQ + dy[i] * b});
        queen.insert({xQ + dx[i] * b, yQ + dy[i] * a});
    }
    int ans = 0;
    for (auto it : king)
    {
        if (queen.find(it) != queen.end())
        {
            ans++;
        }
    }
    cout << ans << endl;
    return;
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