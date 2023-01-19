#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<string> s;
    string ar[]={"Good","God","Good","God","god"};
    for(int i=0;i<5; i++)
    {
       if(!s.count(ar[i]))
       {
            s.insert(ar[i]);
        }
    }
    for(auto it:s)
    {
        cout<<it<<" ";
    }
}