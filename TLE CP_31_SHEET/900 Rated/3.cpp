/***************************************************************
 * Problem    : C. Vasilije in Cacak (Codeforces Round 900 (Div. 3))
 * Author     : Abhay Palway
 * Date       : 11 July 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== SOLUTION START =====================*/

void solve()
{
    long long n, k, x;
    cin >> n >> k >> x;

    long long minsum = (k * (k + 1)) / 2;
    long long maxsum = ((n * (n + 1)) - ((n - k) * (n - k + 1))) / 2;
    if (x >= minsum && x <= maxsum)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
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