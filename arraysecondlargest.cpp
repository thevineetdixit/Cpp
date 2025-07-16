#include<iostream>
#include<limits.h>
#include<algorithm>
using namespace std;
int main (){
    int i;
    int arr[5];

for(i=0;i<5;i++)
cin>>arr[i];

int ans=INT_MIN;

for( i=0;i<5;i++)
{
    if(arr[i]>ans)
    ans=arr[i];
}

int second=-1;
for(i=0;i<5;i++)
{
    if(arr[i]!=ans)
    second = max (second,arr[i]);
    }
    cout<<second;
    return 0;


}