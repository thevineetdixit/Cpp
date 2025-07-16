#include<iostream>
using namespace std;

void fun (int **p)
{
    **p=**p+10;//by use of double pointer 
}

int main()
{
    int n =10;

    int*p1 = &n;//single pointer

    int **p2 = &p1;//double pointer

    int ***p3 = &p2;//triple pointer

   // cout<<p1<<endl;//both will have the same address 
   // cout<<&n<<endl;//both will have the same address 
//
   // cout<<p2<<endl;//both will have the same address 
   // cout<<&p1<<endl//both will have the same address 
//
   // cout<<p3<<endl;//both will have the same address 
   // cout<<&p2<<endl//both will have the same address 
//

    //value kp modify krna h jo n me rakhi h

    //with the help of single pointer *p
   //*p1=*p1+5;
   //cout<<n<<endl;

   ////with the help of double pointer
   //**p2=**p2+5;
   //cout<<n<<endl;

   ////with the help of triple pointer
   //***p3=***p3+5;
   //cout<<n<<endl;

//with thee help of function

fun(p2);
cout<<n<<endl;




    
     




}