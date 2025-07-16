#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[6]={7,5,8,3,0,2};

    for(int i=0;i<5;i++) // it shows the number of rounds you want to prefrom for the sorting
    {
        int index=i;
        for(int j=i+1;j<6;j++)
        {
            if(arr[j]<arr[index])
            index=j;
        }
      swap (arr[i],arr[index]);
        

        
    }

    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

