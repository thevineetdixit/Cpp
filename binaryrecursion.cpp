#include<iostream>

using namespace std;
bool binarysearch(int arr[],int start,int end,int X)
{
    if(start>end)
    return 0;

    int mid=start+(end-start)/2;

    if(arr[mid]==X)
    {return 1;}

    else if(arr[mid]<X)
    {
        return binarysearch(arr,mid+1,end,X);
    }
    else
    return binarysearch(arr,start,mid-1,X);

}
int main()
{
    int arr[]={2,4,6,7,1,9};
    int X=5;
    cout<<binarysearch(arr,0,5,X);
}