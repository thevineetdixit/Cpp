#include<iostream>
using namespace std;
int main(){
    int row,col,n;
    cin>>n;
    for(row=1;row<=n;row++)
    {
        //space print
        for(col=1;col<=n-row;col++)
        cout<<"  ";
        //print number
        for(col=1;col<=row;col++)
        cout<<row<<" ";
        cout<<endl;
    }
return 0;
}