/***************************************************************
 * Problem    : A. Doremy's Paint 3 (Codeforces Round 906 (Div. 2))
 * Author     : Abhay Palway
 * Date       : 25 May 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== SOLUTION START =====================*/

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        freq[v[i]]++;
    }

    if (freq.size() > 2)
    {
        cout << "NO\n";
        continue;
    }

    if (freq.size() == 1)
    {
        cout << "YES\n";
        continue;
    }

    auto it = freq.begin();
    int cnt1 = it->second;
    ++it;
    int cnt2 = it->second;

    int minc = min(cnt1, cnt2);
    int maxc = max(cnt1, cnt2);

    if (minc == n / 2 && maxc == (n + 1) / 2)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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
