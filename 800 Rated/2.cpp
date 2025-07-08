/***************************************************************
 * Problem    : A. Line Trip (Educational Codeforces Round 158 (Div. 2))
 * Author     : Abhay Palway
 * Date       : 21 May 2025
 ****************************************************************/


/* We want to travel from 0 to x and back to 0 using car which spend 1 litre of gasoline on 1 unit distance travel.
At 0 car is fully fueled. 
There is n (array -> a1, a2, a3,...an.) gas station between 0 to x and not present at 0 neither x. 
we want output minimum amount of gas so we travel to 0 t0 x and back to 0.

Input-> n, x, and a1,a2,.......
Output-> minimum volume capacity of gas.

Example-1: n=3 , x=7 , a={1,2,5}. ans=4
0 to 1 -> 3, refuel it->4
1 to 2 -> 3, refuel it->4
2 to 5 -> 1, refuel it->4
5 to 7 -> 2, because no gas station at 0 & x.
7 to 5 -> 0, refuel it->4
5 to 2 -> 1, refuel it->4
1 to 0 -> 3.


Approach:- let distance b/w 0 to a1 is d1, a1 to a2 is d2, a2 to x and back to a2 is d3. 
answer is max of {d1,d2,d3....dn}.
*/

#include<bits/stdc++.h>
using namespace std;


/*================== SOLUTION START =====================*/ 

void solve()
{
    int n,x;
        cin>>n>>x;
        vector<int>d;
        int a,p=0;
        for(int i=0;i<n;i++){
            cin>>a;
            d.push_back(abs(p-a));
            p=a;
        }
        d.push_back(2*abs(p-x));
        int ans=*max_element(d.begin(),d.end());
        cout<<ans<<endl;
}

/*================== SOLUTION END =====================*/

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}