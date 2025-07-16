#include<iostream>
using namespace std;


/*void print (int arr[],int index,int n)
{
    if(index==n)
    {
     return;
    }

    cout<<arr[index]<<endl;

    print(arr,index+1,n);

}*/

//FOR REVERSE PRINT OF THE ARRAY FROM RECURSION

/*void print (int arr[],int index,int n)
{
    if(index==n)
    {
     return;
    }
    print(arr,index+1,n);

    cout<<arr[index]<<" ";


}*/

//reverse WITH ONLY TWO ARGUMENTS

void print(int arr[],int index)
{
    if(index==-1)
    return;

    print(arr,index-1);
    cout<<arr[index]<<" ";
}


int main()
{
    int arr[] = {3,4,1,2,8};

    print (arr,4);
}