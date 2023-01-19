#include<bits/stdc++.h>
using namespace std;
int  FindValue(vector<int>ar, int p)
{
    unordered_set<int>n1,a1;
    int count =0;
    for(int a : ar)
    {
        if(n1.find(p-a)!=n1.end()&& a1.find(a)== a1.end())
        {
            count++;
            a1.insert(a);
            a1.insert(p-a);
            cout<<a<<" \n";
            cout<<p-a<<" \n";
        }
        n1.insert(a);
    }
    return count;
}
int main()
{
    vector<int>u{1,5,1,5};
    int k=6;
    cout<<FindValue(u,k)<<"\n";
}