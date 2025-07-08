/***************************************************************
 * Problem    : A. Button (Codeforces Round 893 (Div. 2))
 * Author     : Abhay Palway
 * Date       : 27 May 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== SOLUTION START =====================*/

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int aextra = 0, bextra = 0;
    if (c % 2 != 0)
    {
        aextra = (c / 2) + 1;
        bextra = abs(c - aextra);
    }
    else
    {
        aextra = c / 2;
        bextra = abs(c - aextra);
    }
    int a_moves = a + aextra, b_moves = b + bextra;
    if (a_moves > b_moves)
        cout << "First" << endl;
    else
        cout << "Second" << endl;
}

/*================== SOLUTION END =====================*/

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
