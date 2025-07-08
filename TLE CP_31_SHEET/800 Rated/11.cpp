/***************************************************************
 * Problem    : A. Ambitious Kid (COMPFEST 15 - Preliminary Online Mirror)
 * Author     : Abhay Palway
 * Date       : 01 June 2025
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
    if (find(v.begin(), v.end(), 0) != v.end())
    {
        cout << 0 << endl;
    }
    else
    {
        int minv = INT_MAX;
        for (int x : v)
        {
            minv = min(minv, abs(x));
        }
        cout << minv << endl;
    }
}

/*================== SOLUTION END =====================*/

int main()
{
    solve();
}
