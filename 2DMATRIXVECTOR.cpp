#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    //create a 2D array

    vector< vector<int> >matrix(3,vector<int>(4,2));

    for(int i=0;i<3;i++)
    for(int j=0;j<4;j++)
    cout<<matrix[i][j]<<endl;


    //to find the row and the column of te matrix
    cout<<"No of ROW of the matrix : "<<matrix.size()<<endl;
    cout<<"no of column of the matrix : "<<matrix[0].size()<<endl;

                                 
}