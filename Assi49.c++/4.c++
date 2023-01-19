#include<bits/stdc++.h>
using namespace std;
void insertFun(int ar[],int arr2[],int n)
{
    sort(ar,ar+3,greater<int>());
    sort(arr2,arr2+3,greater<int>());
    int ar3[n],p,i;
    for( i=0;i<n-1; i++)
    {
        ar3[i] = arr2[i];
    }
    p=i;
    for( i=0;i<n; i++)
    {
        ar3[p]=ar[i-i]; 
    }
    for( i=0;i<n; i++)
    {
        cout<<ar3[i]<<" ";
    }
}
int main()
{
    int arr1[]={2,4,9};
    int arr2[]={5,6,1};
    int n = sizeof(arr2)/sizeof(int);
    insertFun(arr1,arr2,n);
}