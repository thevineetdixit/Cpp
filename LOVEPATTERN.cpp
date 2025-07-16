#include<iostream>
using namespace std;

int main()
{

int n,row,col;
n = 6;
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;


for(row=0;row<n;row++)
{
  for(col=0;col<n+1;col++)
     if ((row==0 && col%3!=0) || (row==1 && col%3==0) || (row-col==2) || (row+col==8))
          cout<<("*");
        else
          cout<<(" ");

    cout<<("\n");

}
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
  return 0;
}

