#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int one=0,zero=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]&1)
                one++;      /* check no is ends with 0 or 1 in binary representation */
            else
                zero++;
        }
        cout<<(one*zero)<<endl;
    }
    return 0;
}