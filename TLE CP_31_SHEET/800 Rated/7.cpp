/***************************************************************
 * Problem    : A. Don't Try to Count (Codeforces Round 903 (Div. 3))
 * Author     : Abhay Palway
 * Date       : 25 May 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== SOLUTION START =====================*/

void solve()
{
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    string temp = x;
    for (int i = 0; i <= 6; i++)
    {
        if (temp.find(s) != string::npos)
        {
            cout << i << endl;
            break;
        }
        if (i >= 5)
        {
            cout << -1 << '\n';
            break;
        }
        temp += temp;
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
    return 0;
}
