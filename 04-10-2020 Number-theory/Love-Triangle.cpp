/* Always try to solve these type of integar overflow questions using python */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num,i,j,carry,nod,res[1000],prod;
    cin>>num;
    res[0]=1;   /* factotial store in array  */
    nod=1;
    for(i=2;i<=num;i++)
    {
       for(j=0;j<nod;j++)
       {
          prod=res[j]*i+carry;
          res[j]=prod%10;
          carry=prod/10;
       }
       while(carry!=0)
       {
           res[nod]=carry%10;
           carry=carry/10;
           nod++;
       }
    }
    for(i=nod-1;i>=0;i--)   /* print array from back */
    cout<<res[i];
    cout<<endl;
    return 0;
}