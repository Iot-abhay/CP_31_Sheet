/***************************************************************
 * Problem    : A. Jagged Swaps (CodeTON Round 7 (Div. 1 + Div. 2))
 * Author     : Abhay Palway
 * Date       : 24 May 2025
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
    if (v[0] == 1)
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
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
