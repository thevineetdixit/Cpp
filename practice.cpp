#include<iostream>
#include<math.h>
using namespace std;

int maxx(int num1,int num2)
{
    if(num1>num2)
    return num1;
}
int main()
{
    int num1;
    int num2;
    cin>>num1>>num2;

    cout<<maxx(num1,num2);

    return 0;

}