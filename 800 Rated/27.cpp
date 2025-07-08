/***************************************************************
 * Problem    : A. One and Two (Codeforces Round 851 (Div. 2))
 * Author     : Abhay Palway
 * Date       : 05 June 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== SOLUTION START =====================*/

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);

    int cnt2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 2)
            cnt2++;
    }

    int left_2 = 0;
    int ans = -1;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] == 2)
            left_2++;

        int right_2 = cnt2 - left_2;
        if (left_2 == right_2)
        {
            ans = i + 1;
            break;
        }
    }
    cout << ans << endl;
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
