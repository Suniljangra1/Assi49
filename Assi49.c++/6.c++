#include<bits/stdc++.h>
using namespace std;
int HCF(int a,int b)
{
    int i,s;
    for( i=1;i<a*b/2;i++)
    {
        if(a%i==0 && b%i==0)
        {
            s = i;
        }
    }
   return s;
}
int PrimeN (int a)
{
    int i,count;
    for(i = 2 ;i<a-1 ; i++)
    {
        if(a%i==0)
        {
            count ++;
        }
    }
   return count;
}
int main()
{
 int ar[]={2,3,9},r=0;
 int n = sizeof(ar)/sizeof(int);
 for(int i=0;i<n; i++)
 {
    for(int j=0; j<n; j++)
    {
        int F = HCF(ar[i],ar[j+1]);
        r=PrimeN(F);
        // cout<<r;
    }
 }   
 cout<<r; 
}