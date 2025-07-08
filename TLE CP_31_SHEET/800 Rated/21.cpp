/***************************************************************
 * Problem    : B. Blank space (Codeforces Round 871 (Div. 4))
 * Author     : Abhay Palway
 * Date       : 08 June 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== SOLUTION START =====================*/

void solve()
{
    int n;
    cin >> n;
    int c = 0, maxc = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x == 0)
        {
            c++;
            maxc = max(maxc, c);
        }
        else
        {
            c = 0;
        }
    }

    cout << maxc << endl;
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