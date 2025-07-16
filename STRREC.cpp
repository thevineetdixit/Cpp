#include<iostream>

using namespace std;

bool checkpal(string s,int start,int end)
{
    //BASE CODITIOM
    if(start>=end)
    return 1;

//MATCHING CONDITION DOR NOT MATCHED
    if(s[start]!=s[end])
    return 0;
//MATCHED
    return checkpal(s,start+1,end-1);
}


int main()
{
    string s="loda";

    int start=0,end=3;

    cout<<checkpal(s,start,end);

    return 0;
}