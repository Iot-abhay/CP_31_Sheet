/***************************************************************
 * Problem    : A. Jellyfish and Undertale (Codeforces Round 901 (Div. 2))
 * Author     : Abhay Palway
 * Date       : 14 July 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== SOLUTION START =====================*/

void solve()
{
    long long a, b, n;
    cin >> a >> b >> n;
    vector<long long> v(n);
    long long min_time = b;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        min_time += min(v[i], a - 1);
    }

    cout << min_time << '\n';
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