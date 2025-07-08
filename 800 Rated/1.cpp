/***************************************************************
 * Problem    : A. Halloumi Boxes (Codeforces Round 912 (Div. 2))
 * Author     : Abhay Palway
 * Date       : 20 May 2025
 ****************************************************************/

/* We have Length of array n , atmost size of sub-array <=k and array of size n.
We have to reverse the sub-array -> it also change array and this operation done any number of times.

Goal:- Check if array is sort in increasing order or not.
if sort and print "YES" and if not print "NO".

Example-1: n=4, k=4 a={6,4,2,1}
if we choose sub-array of 4 size or full array and reverse it then it became in increasing order.

if array is sorted print "Yes".
if array is unsorted
-> if k=1, it not possible to sort answer is always "NO".
-> if k>1, it will sort with m operation that mean always "YES"
*/

#include <bits/stdc++.h>
using namespace std;

/*================== SOLUTION START =====================*/ 

void solve()
{
    long long n, k;
    cin >> n >> k;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<long long> a = v;
    sort(a.begin(), a.end());
    if (a != v)
    {
        if (k > 1)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

/*================== SOLUTION END =====================*/

int main(){
    int t=1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
