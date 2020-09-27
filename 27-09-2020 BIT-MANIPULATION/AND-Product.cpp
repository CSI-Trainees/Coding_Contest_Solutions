#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int l,r;
        cin>>l>>r;
        int f=1;                // make 1 as long long 
        int d=r-l+1;            // number between l and r
        int ans=0;
        for(int i=0;i<=31;i++)
        {
            if( (f<<i)  < d)                  // if(d > 2^i)
                continue;
            else
            {
                if(l&(f<<i) && r&(f<<i))      // if (i th bit of l and r are '1')
                    ans=ans+(f<<i);      
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}