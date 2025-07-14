/***************************************************************
 * Problem    : B. Longest Divisors Interval (Codeforces Round 889 (Div. 2))
 * Author     : Abhay Palway
 * Date       : 06 July 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*==================SOLUTION START=====================*/

void solve()
{
    long long n;
    cin >> n;
    int i = 1;
    while (n % i == 0)
    {
        i++;
    }
    cout << i - 1 << "\n";
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