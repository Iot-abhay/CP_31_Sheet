/***************************************************************
 * Problem    : B. Chemistry (Codeforces Round 905 (Div. 3))
 * Author     : Abhay Palway
 * Date       : 10 July 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== SOLUTION START =====================*/

void solve()
{
    long long n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    unordered_map<char, int> freq(26);
    for (char ch : s)
    {
        freq[ch - 'a']++;
    }
    long long odd_freq = 0;
    for (auto it : freq)
    {
        odd_freq += (it.second % 2);
    }
    if(odd_freq>k+1){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
    }
    return;
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