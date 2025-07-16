//(2*row)-1
#include<iostream>
using namespace std;
int main(){
int row,col,n;

cout<<"enter the number: ";
cin>>n;

for(row=1;row<=n;row++)
{
    for(col=1;col<=n-row;col++)
    {cout<<" ";} //do space doge to two spaces wwala pyramid banega aur neeche * ke baad bhi ek space dena pdega

    for(col=1;col<=(2*row)-1;col++)
    cout<<"*";

    cout<<endl;
}
return 0;




}