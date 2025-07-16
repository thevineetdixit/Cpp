   #include<iostream>
using namespace std;

int main()
{
    int row,col;
    cout<<"enter the number of rows of matrixes: ";
    cin>>row;
    cout<<"enter the number of column of the matrixes: ";
    cin>>col;

    int arr1[row][col],arr2[row][col],ans[row][col];

    cout<<"enter the lements of the first matrix";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        cin>>arr1[i][j];
    }
    cout<<"enter the elements of the second matrix";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        cin>>arr2[i][j];
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)

        ans[i][j]=arr1[i][j]+arr2[i][j];
    }
    

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col; j++)


        cout<<ans[i][j]<<" ";

    }

    return 0;
}