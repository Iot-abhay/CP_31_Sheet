/***************************************************************
 * Problem    : D. Balance Round (Codeforces Round 886 (Div. 4))
 * Author     : Abhay Palway
 * Date       : 18 July 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== SOLUTION START =====================*/

void solve()
{

    long long n, k;
    cin >> n >> k;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    long long c = 1, pro = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i] - v[i - 1] <= k)
        {
            c++;
        }
        else
        {
            c = 1;
        }
        pro = max(pro, c);
    }
    cout << n - pro << endl;
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