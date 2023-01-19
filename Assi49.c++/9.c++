#include<bits/stdc++.h>
using namespace std;
int Fun(string ar[],int s,int n)
{
    unordered_set<int> R;
    int vlaue=0,i,j;
    for( i=0;i<s; i++)
    { cout<<"loop";
        for(j=0;j<n;i++)
            vlaue = max(vlaue,(int)ar[i][j]-'0');
        for(int i=0;i<s; i++)
            if(ar[i][j] - '0'==vlaue)
            R.insert(i);
    }
    cout<<R.size();
    return R.size();
}
int main()
{
    
    
    string ar[]={"223","232","112"};
    int s = ar->length();
    int n = sizeof(ar)/sizeof(ar[0]);
    cout<<Fun(ar,s,n);
}