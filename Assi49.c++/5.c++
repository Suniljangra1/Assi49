#include<bits/stdc++.h>
using namespace std;
bool SubArray(int a[], int n)
{
    unordered_set<int> M;
    int sum =0;
    for(int i=0; i<n; i++)
    {
        sum = sum+a[i];
        if(sum==0||M.find(sum)!=M.end())
        return true;
        M.insert(sum);
    }
    return false;
}
int main()
{
   int S[]={1,2,3,5,4};
   int n = sizeof(S)/sizeof(int );
    if(SubArray(S,n))
    cout<<"True";
    else 
    cout<<"False";

}