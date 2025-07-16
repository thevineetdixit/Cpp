#include<iostream>
using namespace std;

int sum(int m,int n) //funtion declare
{
    int ans = m+n;  //funtion define 
    return ans;
}

int mul(int m,int n) //function  define
{
    int ans=m*n;
    return ans;
}

int main()
{
    int a,b;
    cout<<"enter the value of two numbers: ";
    cin>>a>>b;

    //function call
    cout<<sum(a,b);
    cout<<endl;
    cout<<mul(a,b);
}