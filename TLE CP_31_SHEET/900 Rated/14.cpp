/***************************************************************
 * Problem    : A. AvtoBus (Codeforces Round 791 (Div. 2))
 * Author     : Abhay Palway
 * Date       : 14 July 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== SOLUTION START =====================*/

void solve()
{

    long long n;
    cin >> n;
    if (n < 4 || n % 2 != 0)
    {
        cout << -1 << "\n";
    }
    else {
        long long maxm = n / 4;
        long long minm = (n + 6 - 1) / 6;
        cout << minm << " " << maxm << "\n";
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