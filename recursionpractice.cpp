#include <bits/stdc++.h>
using namespace std;


//this question is good and it is find perfect sum when any element can be repeated any no of times
// int subset(int arr[], int idx, int n, int sum)
// {
//     if (sum == 0)
//         return 1;
//     if (sum < 1 || idx == n)
//         return 0;

//     // lena h                            //nhi lena h
//     return subset(arr, idx, n, sum - arr[idx]) + subset(arr, idx + 1, n, sum);
// }






//----------------array/string  permutation------------------

// void permut(int arr[],vector<vector<int>>& ans,vector<int>&temp,vector<bool>&visited)
// {
//     if(temp.size()==visited.size())
//     {
//         ans.push_back(temp);
//         return ;
//     }

//     for(int i=0;i<visited.size();i++)
//     {
//         if(visited[i]==0)
//         {
//             visited[i]=1;
//             temp.push_back(arr[i]);
//             permut(arr,ans,temp,visited);
//             visited[i]=0;
//             temp.pop_back();
//         }
//     }
// }

//a little variation to this problem (doing permutations without temp usage)
// for(int i=index;i<n;i++)
// {
//     swap(arr[index],arr[i]);
//     permut(arr,ans,index+1);
//     swap(arr[index],arr[i]);
// }







int main()
{
    int arr[] = {2, 5, 6, 2};

    int sum = 8;

    cout <<permut(arr, 0, 4, sum);

    return 0;
}