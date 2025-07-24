/***************************************************************
 * Problem    : B. Make It Increasing (Codeforces Round 787(Div. 3))
 * Author     : Abhay Palway
 * Date       : 24 July 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== SOLUTION START =====================*/

void solve()
{
    long long n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    long long ans = 0;

    for (int i = n - 2; i >= 0; i--)
    {
        while (v[i] >= v[i + 1])
        {
            ans++;
            v[i] /= 2;
            if (v[i] == 0)
                break;
        }
        if (v[i] >= v[i + 1])
        {
            cout << -1 << endl;
            return;
        }
    }
    cout << ans << endl;
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
