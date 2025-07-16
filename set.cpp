#include<bits/stdc++.h>
using namespace std;

int mian()
{
    set<int>s;

    // insert
    s.insert(10);
    s.insert(20);
    s.insert(20);
    s.insert(140);
    s.insert(102);
    s.insert(60);
    s.insert(80);

    for(auto it = s.begin();it!=s.end();it++)
    {
        cout<<*it<<endl;
    }


}
