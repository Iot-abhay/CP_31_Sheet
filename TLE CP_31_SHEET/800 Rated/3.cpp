/***************************************************************
 * Problem    : A. Cover in Water (Codeforces Round 911 (Div. 2))
 * Author     : Abhay Palway
 * Date       : 22 May 2025
 ****************************************************************/

/* We have a row of bucket(cell) some is blocked and some is empty.
Our aim is to fill all empty bucket, So he perform 2 action :-
1. Place water in an empty cell.
2. Remove water from a cell and place it in any other empty cell.
if i bucket is empty and i-1 && i+1 is filled with water then i is filled with water.

find:- Minimum number of action 1 so all empty cell is filled with water.
Note:- Blocked- neither contain water and nor its filled with water. Don't need to minimize number of action 2.

Input:- Length of string n, String s,     Output:- Minimum number of action 1.

if '.'==empty cell, if '#'==blocked cell.

Approach:-
if we have 3 continous empty cell then ans is 2('.').
else ans will be number of all empty cell('.').
*/

#include <bits/stdc++.h>
using namespace std;

/*================== SOLUTION START =====================*/

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int counter = 0;
    bool check = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (i + 2 < n && s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.')
        {
            check = true;
            break;
        }
        if (s[i] == '.')
        {
            counter++;
        }
    }
    if (check)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << counter << endl;
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
