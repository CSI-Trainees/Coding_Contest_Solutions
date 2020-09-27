#include<bits/stdc++.h>
using namespace std;
# define int long long
int32_t main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      int a[n];
      int f=0;
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      sort(a,a+n);
      for(int i=0;i<n;i++)
      {
        if(i!=0)
        {
           if(abs(a[i-1]-a[i])>1)
            f=1;
        }
      }
      if(f==0)
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;
  }
  return 0;
}
