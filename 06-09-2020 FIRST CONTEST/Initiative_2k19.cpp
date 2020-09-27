#include<bits/stdc++.h>      //#include<stdio.h>
using namespace std;


int main() {  
   long long n;     
    cin>>n;                // scanf("%lld",&n);
    long long a[n];   
    for(long long i=0;i<n;i++)
        cin>>a[i];        // scanf("%lld",&a[i]);
    sort(a,a+n,greater<int>());
    for(long long i=0;i<n;i++)
    cout<<a[i]<<" ";     // printf("%lld ",a[i]);
    return 0;
}