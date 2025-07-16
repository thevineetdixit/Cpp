#include<iostream>
using namespace std;
int main()
//IMP
{
    int col,row;
    for(row=1;row<=5;row=row+1)
    {
        for(col=1;col<=row;col=col+1)
        {cout<<col<<" ";}
        cout<<endl;
    }
    return 0;
}