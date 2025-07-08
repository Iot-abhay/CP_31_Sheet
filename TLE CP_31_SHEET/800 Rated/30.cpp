/***************************************************************
 * Problem    : A. Extremely Round (Educational Codeforces Round 139 (Div. 2))
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

    int ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] <= n)
        {
            ans++;
        }
        else
        {
            break;
        }
    }

    cout << ans << endl;
}

/*================== SOLUTION END =====================*/
int main()
{
    vector<int> v;
    for (int i = 1; i < 1000000; i++)
    {
        int x = i;
        int digit = 0;
        while (x > 0)
        {
            if (x % 10 != 0)
                digit++;
            x /= 10;
        }
        if (digit == 1)
        {
            v.push_back(i);
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
