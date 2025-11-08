/* TOTAL NO OF PERMUTATION OF N SIZE ARRAY IS N FACTORIAL I.E N!*/
// LEETCODE 48

#include <iostream>
#include <vector>
using namespace std;

void permut(int arr[], vector<vector<int>> &ans, vector<int> &temp, vector<bool> &visited)
{
    // BASE CODITION
    if (visited.size() == temp.size())
    {
        ans.push_back(temp);
        return;
    }
    for (int i = 0; i < visited.size(); i++)                                                                                                                               
    {
        if (visited[i] == 0)
        {
            visited[i] = 1;
            temp.push_back(arr[i]);
            permut(arr, ans, temp, visited);
            visited[i] = 0;
            temp.pop_back();
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<vector<int>> ans;
    vector<int> temp;
    vector<bool> visited(9, 0);

    permut(arr, ans, temp, visited);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";

        cout << endl;
    }
}
