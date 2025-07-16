#include<iostream>
using namespace std;

void print(int n)
{
    if(n==1)
    {
        cout<<n<<" ";
        return ;
    }
    print(n-1);
    cout<<n<<" 9";
}

int main()
{
    int n ;
    cout<<"Enter the value of n: \n";

    cin>>n;

    print (n);

return 0;
}

