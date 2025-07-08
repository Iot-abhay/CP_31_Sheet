/***************************************************************
 * Problem    : A. Serval and Mocha's Array (Codeforces Round 853 (Div. 2))
 * Author     : Abhay Palway
 * Date       : 12 June 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== SOLUTION START =====================*/

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    bool check = false;
    for (int i = 0; i < n && !check; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (__gcd(v[i], v[j]) <= 2)
            {
                check = true;
                break;
            }
        }
    }

    cout << (check ? "YES" : "NO") << '\n';
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
    return 0;
}
