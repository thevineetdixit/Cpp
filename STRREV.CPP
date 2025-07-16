#include<iostream>

using namespace std;

void rev(string &str,int start,int end)
{
    if(start>=end)
    return ;

    swap(str[start],str[end]);

    rev (str,start+1,end-1);

}


int main()
{
    string str="vineet";
    rev(str,0,5);

    cout<<str<<endl;
}