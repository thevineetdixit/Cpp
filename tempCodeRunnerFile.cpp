#include<iostream>
using namespace std;

int Binarysearch(int arr[],int n,int key)
{
    int start=0,end=n-1;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
         if(arr[mid]==key)
         return mid;
         else if(arr[mid]<key)
         start=mid+1;
         else
         end=mid-1;
    }
}

int main ()
{
int n;
cout<<"Enter the size of the array : "<<endl;
cin>>n;
int arr[n];

for(int i=0;i<n;i++)
{
    cout<<"Enter the "<<i<<" index element of the array "<<endl;
    cin>>arr[i];
}
int key;
cout<<"enter the key element "<<endl;
cin>>key;

cout<<Binarysearch(arr,n,key);
return 0;

}
