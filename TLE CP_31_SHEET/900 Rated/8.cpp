/***************************************************************
 * Problem    : B. Comparison String (Educational Codeforces Round 149 (Div. 2))
 * Author     : Abhay Palway
 * Date       :   July 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== SOLUTION START =====================*/

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int maxs = 0, c = 1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1])
        {
            c++;
        }
        else
        {
            c = 1;
        }
        maxs = max(maxs, c);
    }
    cout << maxs + 1 << endl;
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