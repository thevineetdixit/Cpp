#include<iostream>
using namespace std;
int main(){
int row,col,n;
cout<<"enter the number";
cin>>n;

for(row=n;row>=1;row--)
{
   //print *
   for(col=1;col<=row;col++)
   {cout<<"* ";}

   //print " "
   for(col=1;col<=2*n-2*row;col++)
   {cout<<"  ";}

   //print *
   for(col=1;col<=row;col=col+1)
   cout<<"* ";

   cout<<endl;
}


for(row=1;row<=n;row++)
{
   //print *
   for(col=1;col<=row;col++)
   {cout<<"* ";}

   //print " "
   for(col=1;col<=2*n-2*row;col++)
   {cout<<"  ";}

   //print *
   for(col=1;col<=row;col=col+1)
   cout<<"* ";

   cout<<endl;
}




return 0;

}