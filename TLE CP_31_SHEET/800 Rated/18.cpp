/***************************************************************
 * Problem    : A. Grasshopper on a line (Educational Codeforces Round 149 (Div. 2))
 * Author     : Abhay Palway
 * Date       : 06 June 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== SOLUTION START =====================*/

void solve()
{
    int x, k;
    cin >> x >> k;
    if (x % k != 0)
    {
        cout << 1 << "\n"<< x << "\n";
    }
    else
    {
        cout << 2 << "\n"<< 1 << " " << x - 1 << "\n";
    }
}

/*================== SOLUTION END =====================*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t=1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}