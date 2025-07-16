#include<iostream>

using namespace std;

int sum(int arr[],int index,int size)
{
    if(index==size)
    return 0;

    return arr[index]+sum(arr,index+1,5);
}

int main()
{
    int arr[]={2,5,6,6,7};

    cout<<sum(arr,0,5)<<endl;
}