#include<iostream>
using namespace std;

int main ()
{
    int a =10;
    cout<<&a<<endl;
    int *ptr=&a;
    cout<<"size of a  "<<sizeof(ptr)<<endl;
    cout<<ptr<<endl;

    float m = 2.3;
    float *ptr2=&m;
    cout<<ptr2<<endl<<&m<<endl;



int c = 10;
    int*p=&c;
    cout<<p<<endl;
    cout<<*p<<endl;
    
}