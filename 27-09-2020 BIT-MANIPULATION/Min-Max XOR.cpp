#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<n<<" ";
    int l=log2(n)+1;          /* no of bits in binary representation of a number */
    for(int i=0;i<l;i++)
    {
        n=n^(1<<i);                /* flipping ith bit */
    }
    cout<<n;
    return 0;
}