/***************************************************************
 * Problem    : A. We need the zero (Codeforces Round 862 (Div. 2))
 * Author     : Abhay Palway
 * Date       : 09 May 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== SOLUTION START =====================*/

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long Xor = 0;
    for (int i = 0; i < n; i++)
    {
        Xor ^= a[i];
    }
    if (n % 2 != 0)
    {
        cout << Xor << endl;
    }
    else
    {
        if (Xor == 0)
            cout << Xor << endl;
        else
            cout << -1 << endl;
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