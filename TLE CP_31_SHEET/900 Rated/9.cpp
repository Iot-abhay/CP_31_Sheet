/***************************************************************
 * Problem    : B. Permutation Swap (Codeforces Round 873 (Div. 2))
 * Author     : Abhay Palway
 * Date       : 18 July 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== SOLUTION START =====================*/

void solve()
{

    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int gcd = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != i + 1)
        {
            gcd = __gcd(gcd, abs(v[i] - (i + 1)));
        }
    }
    cout<< gcd<<endl;
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