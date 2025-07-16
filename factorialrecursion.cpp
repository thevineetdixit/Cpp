#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    return n*fact(n-1);
}

int main ()
{
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    if(n<0)
    {
        cout<<"factorial not possible"<<endl;
    }
     cout<<fact(n);

     return 0;

}