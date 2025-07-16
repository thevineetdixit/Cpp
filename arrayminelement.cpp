#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[5] ={1,2,3,4,5};
    int ans=INT_MAX;
    //min value
    for(int i=0;i<5;i++)
    {
        if(arr[i]<ans)
        ans=arr[i];
    }

    cout<<ans;
    return 0;
}
//for max
// ans=INT_MIN;
//for(int i=0;i<5;i++)
//{
//    if(arr[i]>ans)
//}