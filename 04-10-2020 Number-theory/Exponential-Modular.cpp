#include<bits/stdc++.h>
using namespace std;
# define int long long
int mod=1000000007;
int modulo_exponential(int a,int b)
{
  int r=1;
  while(b)
  {
    if(b&1) r=(r*a)%mod;
    a=(a*a)%mod;
    b=b>>1;
  }
  return r;
}
int32_t main()
{
  int a,b;
  cin>>a>>b;       /* we want (a^b)%mod   */
  cout<<modulo_exponential(a,b)<<endl;
}
