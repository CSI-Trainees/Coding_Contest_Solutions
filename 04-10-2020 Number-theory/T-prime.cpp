// a number is t-prime if it has only three divisors
/*

key points:
   a: a integar has odd number of divisors if it is perfect square.
   b: 1 and N is already two divisors, so need only one more divisors.
   c: if no is perfect square,then its square root of the number is already divisor.
   d: so square root of number should be prime. for that we can make a seive array.

*/
#include<bits/stdc++.h>
using namespace std;
#define int long long
bool isPerfectSquare(long double x) 
{   
  long double sr = sqrt(x); 
  
  return ((sr - floor(sr)) == 0); 
} 
int m=1000000;
int32_t main()
{
  int ans[m+1];
  for(int i=0;i<=m;i++)
    ans[i]=0;
  ans[2]=1;
  for(int i=3;i<=m;i+=2)
    ans[i]=1;
  for(int i=2;i<=m;i++)
  {
    for(int j=i*i;j<=m;j=j+i)
    {
      ans[j]=0;
    }
  }
  int t;
  cin>>t;
  while(t--)
  {
  int n;
  cin>>n;
  if(isPerfectSquare(n))
  {
    int k=sqrt(n);
     if(ans[k]==1)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
  }
  else
  {
    cout<<"NO"<<endl;
  }
  }
}