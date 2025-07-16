#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// functors
// class comparator{
//     public:
//     bool operator()(pair<int,int>p1,pair<int,int>p2){
//         return p1.second>p2.second; // descending;
//     }
// };



void print(vector<pair<int,int>>&v)
{
    for(pair<int,int>& p: v)
    cout<<p.first<<","<<p.second<<": ";
}


int main ()
{
    vector<pair<int,int>>v = {{2,1},{3,8},{5,6},{8,9},{9,0}};
    // lamda expressions
    sort(v.begin(),v.end(),[](pair<int,int>p1,pair<int,int>p2){
        return p1.second> p2.second;
    });
    print(v);

    return 0;
}