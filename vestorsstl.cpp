#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    //create vector
    vector<int>v;
    // 5 elements aur sab 1 se initialize honge
    vector<int>v1(5,1);
    //size and capacity
    cout<<"size of the vector : "<<v.size()<<endl;
    cout<<"capacity of the vector: "<<v.capacity()<<endl;
    v.push_back(2);
    v.push_back(3);
    v.push_back(10);
    cout<<"size of the vector :"<<v.size()<<endl;
    cout<<"capacity of the vector: "<<v.capacity()<<endl;
    //updtae the value
    v[1]=5;

//jitna size utna caoacity
cout<<"size of the v1: "<<v1.size()<<endl;
cout<<"capacity of the v1: "<<v.capacity()<<endl;
v1.push_back(8);
cout<<"size of the v1 after pushback: "<<v1.size()<<endl;
cout<<"capacity of the v1 after pushback: "<<v.capacity()<<endl;

vector<int>v3 = {1,2,3,4,5}; 

//delete value from the vector
//pop_back removes the last element
vector<int>vnew;
vnew.push_back(2);
vnew.push_back(21);
vnew.push_back(22);
vnew.push_back(23);
vnew.push_back(24);

vnew.pop_back();

cout<<"size of vnew after popback: "<<vnew.size()<<endl;
cout<<"capacity of vnew after popback: "<<vnew.capacity()<<endl;
//.erase koi bhi ek element ko nikaldeta h
vnew.erase(vnew.begin()+1) ;

for(int i =0;i<vnew.size();i++)
cout<<vnew[i]<<" ";
vnew.insert(vnew.begin()+1,50);//insert value
cout<<endl;
for(int i=0;i<vnew.size();i++)
cout<<vnew[i]<<" ";

vnew[1]=67;

vnew.clear(); //remove all the element 

vector<int>arr;

arr.push_back(2);
arr.push_back(12);
arr.push_back(21);
arr.push_back(122);
cout<<arr[0]<<endl;
cout<<arr.front()<<endl;
cout<<arr[arr.size()-1]<<endl;
cout<<arr.back()<<endl;


vector<int>a;
// copy value pf 1 vector to another

a=arr;
cout<<a.size();
cout<<endl;
for(auto it = arr.begin();it!=arr.end();it++)
{
    cout<<*it<<" ";
}
cout<<endl;
for(auto i: arr)
cout<<i<<" ";


//******SORTING BY VECTORS**********

vector<int>ans;
ans.push_back(5);
ans.push_back(235);
ans.push_back(15);
ans.push_back(54);
ans.push_back(125);

cout<<endl;


//sort in increasing order

sort(ans.begin(),ans.end());
for(int i=0;i<ans.size();i++)
cout<<ans[i]<<" ";


cout<<endl;
//sort in decreasing order

sort(ans.begin(),ans.end(),greater<int>());
for(int i=0;i<ans.size();i++)
cout<<ans[i]<<" ";

cout<<endl;

//another method to sort in decareasing order

sort(ans.rbegin(),ans.rend());
for(int i=0;i<ans.size();i++)
cout<<ans[i]<<" ";

//search in binary search
cout<<binary_search(ans.begin(),ans.end(),54)<<endl;
//search index of an element in an array
cout<<find(ans.begin(),ans.end(),54)-ans.begin()<<endl;


 




}