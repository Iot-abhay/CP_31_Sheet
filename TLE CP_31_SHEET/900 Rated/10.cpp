/***************************************************************
 * Problem    : D. Odd Queries (Codeforces Round 859 (Div. 4))
 * Author     : Abhay Palway
 * Date       : 19 July 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== SOLUTION START =====================*/

void solve()
{

    long long n, q, sum = 0;
    cin >> n >> q;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    vector<long long> prefix_sum(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + v[i - 1];
    }
    while (q--)
    {
        long long l, r, k;
        cin >> l >> r >> k;
        long long add=(r-l+1)*k;
        long long totalSum=sum-(prefix_sum[r]-prefix_sum[l-1])+add;
        if(totalSum%2==1){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
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