/***************************************************************
 * Problem    : A. Array coloring (Codeforces Round 891 (Div. 3))
 * Author     : Abhay Palway
 * Date       : 04 June 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== SOLUTION START =====================*/

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 != 0)
        {
            c++;
        };
    }
    if (c % 2 == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

/*================== SOLUTION END =====================*/

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}