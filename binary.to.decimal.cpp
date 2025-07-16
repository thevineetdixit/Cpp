#include<iostream>
using namespace std;

int main(){
int num;
cout<<"enter the number: ";
cin>>num;
int mul=1,ans=0,rem;

while(num>0)
{
    //remainder
    rem=num%10;

    //num ko10 se divide krdo
    num=num/10;
    //ams
    ans= mul*rem+ans;
    //mul
    mul*=2;
}

cout<<ans<<endl;




}