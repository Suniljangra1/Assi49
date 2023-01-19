#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(12);
    s.insert(56);
    s.insert(25);
    s.insert(78);
    s.insert(98);
    unordered_set<int> r;
    r.insert(25);
    r.insert(12);
    r.insert(98);
    r.insert(56);
    r.insert(78);
    if(r==s)    // it dosent metter where is number
    cout<<"Set is equle ";      // if all the number same of both set then his return true index dosen't matter 
    else 
    cout<<"Set is not equle ";
}