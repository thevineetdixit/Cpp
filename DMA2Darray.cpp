#include<iostream>
using namespace std;

int main ()
{
    //Array create krna hai jo store krega address 
    int n,m;//n=rowa,m=column
    cout<<"input the number of row: ";
    cin>>n;
    cout<<"input the number of column: ";
    cin>>m;

    int **ptr = new int *[n];

    // created 2d array
    for(int i=0;i<n;i++)
    {
        ptr[i]=new int [m];
    }

    for(int i =0;i<n;i++)
    for(int j=0;j<m;j++)
    cin>>ptr[i][j];

    //print the value
    for(int i =0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    cout<<ptr[i][j]<<" ";
    cout<<endl;
   }

   //release thememory in the heap

   for(int i=0;i<n;i++)
   delete[]ptr[i];

   delete[]ptr;

   return 0;



}