#include<iostream>
using namespace std;

int  main()
{
    int n, c=2;
    cin>>n;
    for(int i=2;i<n;i++)
    { c=i;
        if(n%i==0)
       { 
        cout<<"not prime";
        break;
        }



    }
    if(c==n-1)
    cout<<"prime";


    return 0;
}