/***************************************************************
 * Problem    : A. Forbidden Integer (Educational Codeforces Round 151 (Div. 2))
 * Author     : Abhay Palway
 * Date       : 06 June May 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== SOLUTION START =====================*/

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;

    if (x != 1)
    {
        cout << "YES\n"
             << n << endl;
        for (int i = 0; i < n; i++)
            cout << "1 \n";
    }
    else
    {
        if (k == 1 || (k == 2 && n % 2 != 0))
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            if (n % 2 == 0)
            {
                cout << n / 2 << endl;
                for (int i = 0; i < n / 2; i++)
                    cout << "2 \n";
            }
            else
            {
                cout << (n - 3) / 2 + 1 << endl;
                for (int i = 0; i < (n - 3) / 2; i++)
                    cout << "2 ";
                cout << "3 \n";
            }
        }
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