#include <iostream>
using namespace std;
int main(){
    int row,col,n;
    cout<<"type the number of rows: ";
    cin>>n;
    
    
    
    for(row=n;row>=1;row--)
    {
    
        //spacxe print 
    
    for(col=1;col<=n-row;col++)
    {cout<<"  ";}


    //star print
    
    for(col=1;col<=(2*row-1);col++)
    {cout<<"* ";}

    cout<<endl;
    
    
    }
return 0;
}
