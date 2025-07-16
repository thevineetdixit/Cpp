#include<iostream>
#include<limits.h>

using namespace std;

int minelement(int arr[],int index,int n)
{
    if(index==n-1)
    return arr[index];

    return max(arr[index],minelement(arr,index+1,n));
}

int main()
{
    int arr[]={4,7,8,2,5};

    cout<<minelement(arr,0,5);

    return 0;
} 