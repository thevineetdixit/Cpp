#include<iostream>
using namespace std;

void printcol(int arr[][4], int row ,int col)
{
    //colum wise
    for(int j=0;j<col;j++)
    for(int i=0;i<row;i++)
    cout<<arr[i] [j]<<" ";

}

int main ()
{
    //create 2d array 
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

    //print all the values in array row wise
    for(int row=0;row<3;row++)
    for(int col=0;col<4;col++)
    cout<<arr[row][col]<<" ";


    //Print all the values of an array colum wise,function ko call kro
    printcol(arr,3,4);

    //find a element in our array
    int x=17;

    for(int row=0;row<3;row++)
    for(int col=0;col<4;col++)
    {
        if(arr[row][col]==x)
        {
            cout<<"yes";
            return 0;
        }
    }
     
    cout<<"no"; 

}
