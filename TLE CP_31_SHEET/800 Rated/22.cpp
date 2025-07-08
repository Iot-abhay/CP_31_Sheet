/***************************************************************
 * Problem    : A. Coin (Educational Codeforces Round 146 (Div. 2))
 * Author     : Abhay Palway
 * Date       : 15 May 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== SOLUTION START =====================*/

void solve()
{
    long long n, k;
    cin >> n >> k;
    if (n % 2 == 0 || (n - k) % 2 == 0)
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