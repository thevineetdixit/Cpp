#include<iostream>
using namespace std;
int  main(){
int arr[5];
for(int i=0;i<5;i++)
cin>>arr[i];

int start=0,end=4;
while(start<end)
{
    swap (arr[start],arr[end]);

    start++;
    end--;
}
for(int i=0;i<5;i++)
cout<<arr[i]<<" ";


return 0;


}

