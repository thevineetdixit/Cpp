#include <iostream>
using namespace std;
int main(){
int row,col,n;
cout<<"enter the number: ";
cin>>n;

for(row=1;row<=n;row++)
{
    //space print
    for(col=1;col<=n-row;col++)
    cout<<"  ";
    
    //number print
    for(col=1;col<=row;col++)
    cout<<col<<" ";

    cout<<endl;
}

return 0;
}































