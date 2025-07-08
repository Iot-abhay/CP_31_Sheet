/***************************************************************
 * Problem    : A. Unit array (Codeforces Round 879 (Div. 2))
 * Author     : Abhay Palway
 * Date       : 07 June 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== SOLUTION START =====================*/

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0, cnt_neg1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
        if (v[i] == -1)
            cnt_neg1++;
    }

    int ops = max(0, (-sum + 1) / 2);
    cnt_neg1 -= ops;
    if (cnt_neg1 % 2 != 0)
        ops++;

    cout << ops << endl;
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