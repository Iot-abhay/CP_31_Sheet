/***************************************************************
 * Problem    : A. Desorting (Codeforces Round 887 (Div. 2))
 * Author     : Abhay Palway
 * Date       : 05 June 2025
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
    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] > v[i])
        {
            cout << 0 << endl;
            return;
        }
    }
    int counter = 0;
    int mind = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        mind = min(mind, v[i] - v[i - 1]);
    }
    cout << mind / 2 + 1 << endl;
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
    return 0;
}