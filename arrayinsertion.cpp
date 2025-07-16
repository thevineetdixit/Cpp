#include <iostream>
using namespace std;
int main (){
    int arr[100];
    int n;
    cout<<"enter the number of array elements: ";
    cin>>n;
    cout<<"enter the array elementS: ";

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=1;i<n;i++)//ye sirf rounds represetn kr rha h loop(n-1)rounds
    {
        for(int j=i;j>0;j--)//1-0;2-0;3-0 etc
        {
            if(arr[j]<arr[j-1])//for decreasing (arr[j]>arr[j-1])
            swap(arr[j],arr[j-1]);
            else
            break;
        }
    }    

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }

return 0;
}