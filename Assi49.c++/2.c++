#include<bits/stdc++.h>
using namespace std;
void FunPair(int a[],int n)
{
    unordered_set<int> s;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int diff = a[j] - a[i];
            if(s.find(a[i]- diff)!=s.end())
                cout<<a[i]-diff<< " "<<a[i]<<" "<< a[j]<<endl;
        }
        s.insert(a[i]);
    }
}
int main()
{
    int a[]={2,6,9,12,7,22,31,32,35,42};
    int n = sizeof(a)/sizeof(int);
    FunPair(a,n);
}