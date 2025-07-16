#include<iostream>
using namespace std;

int pow(int num , int m)
{
    if(m==1)
    {
        return num;
    }

    return num*pow(num,m-1);
}

int main()
{
    int n;
    cout<<"enter the value of power\n";
    cin>>n;

    cout<<pow(2,n);

    return 0;


}