#include<iostream>
using namespace std;

void printeven(int num,int N)
{
    if(num==N)
    {
        cout<<num;
        return ;

    }
    cout<<num<<" ";
    printeven(num+2,N);
}

int main()
{
    //print even numbers from 1 to N;
    int N;
    cout<<"enter the value of n"<<endl;
    cin>>N;
    if(N%2==1)
    N--;

    printeven(2,N);

    return 0;
}