/***************************************************************
 * Problem    : A. United We Stand (Codeforce Round 892 (Div. 2))
 * Author     : Abhay Palway
 * Date       : 03 June 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== SOLUTION START =====================*/

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool check = true;
    for (int i = 1; i < n; i++)
    {
        if (v[i] != v[0])
        {
            check = false;
            break;
        }
    }

    if (check)
    {
        cout << -1 << endl;
        return;
    }

    vector<int> b, c;
    int minm = *min_element(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if (v[i] == minm)
        {
            b.push_back(v[i]);
        }
        else
        {
            c.push_back(v[i]);
        }
    }
    cout << b.size() << " " << c.size() << endl;
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;
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
