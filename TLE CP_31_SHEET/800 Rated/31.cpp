/***************************************************************
 * Problem    : A. Two Permutations (Pinely Round 1 (Div. 1 + Div. 2))
 * Author     : Abhay Palway
 * Date       : 14 June 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== SOLUTION START =====================*/

void solve()
{
    long long n, a, b;
    cin >> n >> a >> b;
    if ( a + b + 2 <= n || (a == b && a == n))
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
    int t=1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}