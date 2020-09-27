#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int n;
    cin>>n;
    int c=0;
    while(n)
    {
        n=n&(n-1);   /* it removes the last set bit */
        c++;
    }
    cout<<c;
    return 0;
}



/*   we can use     __builtin_popcountll(n)   function directly    */