/***************************************************************
 * Problem    : D. Deletive Editing (2021-2022 ICPC (Unrated))
 * Author     : Abhay Palway
 * Date       : 29 July 2025
 ****************************************************************/

#include <bits/stdc++.h>
using namespace std;

/*================== SOLUTION START =====================*/

void solve()
{
    string s,t;
    cin >> s>> t;
    int n=s.size();
    vector<int>freq_t(26,0);
    for(char ch:t){
        freq_t[ch-'A']++;
    }
    for(int i=n-1;i>=0;i--){
        if(freq_t[s[i]-'A']>0){
            freq_t[s[i]-'A']--;
        }else{
            s[i]='.';
        }
    }
    string final;
    for(char ch:s){
        if(ch != '.'){
            final+=ch;
        }
    }
    if(final==t) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

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