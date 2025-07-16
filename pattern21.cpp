//very important 
//                     *                 * 
//                     * *             * * 
//                     * * *         * * * 
//                     * * * *     * * * * 
//                     * * * * * * * * * * 
//                     * * * *     * * * * 
//                     * * *         * * * 
//                     * *             * * 
//                     *                 * 






#include<iostream>
using namespace std;
int main(){

int row,col,n;
cout<<"enter the number: ";
cin>>n;

for(row=1;row<=n;row++)
{
    //print *
    for(col=1;col<=row;col++)
    cout<<"* ";

    //space 
    for(col=1;col<=2*n-2*row;col++)
    cout<<"  ";

    //print *
    for(col=1;col<=row;col++)
    cout<<"* ";
    cout<<endl;
}

for(row=n-1;row>=1;row--)
{
    //print *
    for(col=1;col<=row;col++)
    cout<<"* ";

    //space 
    for(col=1;col<=2*n-2*row;col++)
    cout<<"  ";

    //print *
    for(col=1;col<=row;col++)
    cout<<"* ";
    cout<<endl;
}


return 0;
}