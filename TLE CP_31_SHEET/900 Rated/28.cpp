/***************************************************************
 * Problem    : B. Sum of Medians (Codeforces Round 684 (Div. 2))
 * Author     : Abhay Palway
 * Date       : 26 July 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== SOLUTION START =====================*/

void solve()
{
    long long n, k;
    cin >> n >> k;
    vector<long long> v(n * k);

    for (int i = 0; i < n * k; i++)
    {
        cin >> v[i];
    }
    long long sum = 0, pos = n * k;
    while (k--)
    {
        pos -= (n / 2 + 1);
        sum += v[pos];
    }
    cout << sum << '\n';
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