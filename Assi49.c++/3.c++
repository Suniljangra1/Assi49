#include<bits/stdc++.h>
using namespace std;
int ArthmaticOP(int a[], int n)
{
    unordered_set<int> s;
    int count=0;
    for(int i =0; i<n; i++)
    {
        s.insert(i);   // vlaue insert 
    }
     for(int i=0;i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)   // comparison loop 
        {
            int num = a[i]^a[j];   // use xor operator to find out xor value of number 
            if(s.find(num)!=s.end()&&a[i]!=num && num!=a[j])  // jo number mila hai vo alg hona chiya i or j sye 
            {
                count++;
            }
        }
    }
    return count/3;   // three triplate the to un sbi ka ik hi pair bnana hai 
}
int main()
{
    int a[]={1,3,5,10,14,15};
    int n = sizeof(a)/ sizeof(int );
    cout<<ArthmaticOP(a,n);
}