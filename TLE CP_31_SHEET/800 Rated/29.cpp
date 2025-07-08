/***************************************************************
 * Problem    : A. Everybody Likes Good Arrays! (Codeforces Round 845 (Div. 2) & ByteRace 2023)
 * Author     : Abhay Palway
 * Date       : 05 June 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== SOLUTION START =====================*/

void solve()
{
    int n, x;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v[i] = x % 2;
    }
    int counter = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] != v[i + 1])
            counter++;
    }
    cout << n - counter - 1 << endl;
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
