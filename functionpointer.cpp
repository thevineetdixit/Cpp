#include <iostream>

using namespace std;

void swapping (int *p1,int *p2) //pass by pointer 
{
   int temp = *p1;
   *p1=*p2;
   *p2=temp;

   cout<<"address of p1   "<<p1<<endl;
   cout<<"address of p2   "<<p2<<endl;

}

int main ()
{
    int first = 10,second=20;

    cout<<"initial value of a is "<<first<<endl;
    cout<<"initial value of b is  "<<second<<endl; 
    cout<<"address of first variable   "<<&first<<endl;
    cout<<"address of second variable  "<<&second<<endl;

    swapping(&first,&second);

    cout<<"value of first becomes   "<<first<<endl;
    cout<<"value of second becomes  "<<second<<endl;


return 0;
}

