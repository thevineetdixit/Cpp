/*there are two types of header files 
1. User based header files : it is written by the programmer
/* FOR EXAMPLE*/ //#include "this.h"
/*2. System header files : it comes with the compiler*/
/*FOR EXAMPLE*/ 

#include <iostream>
using namespace std;



 int main(){
    int a=5, b=5;

    cout<<"operators in C++:"<< endl;
    cout<<"Following are the types of operators in C++:"<< endl;
    //Arithmetic operators 
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;/*a/b ka answer integer part aayega bs*/
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;

    //Assignment operators
    //int a=3,b=9;
    //char d='d';

    //Comparison operators
    cout<<"Following are the types of operators in C++"<<endl;

    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;
    cout<<endl;
    
    



    //Logical operators
    cout<<"Following are the logical operators in C++"<<endl;


    //logical and operator me bs '&&' hota h 
    cout<<"The value of ((a==b) && (a<b)) logical and operator ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl;

    //logical or operator me '||' hota h bs
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is:"<<((a==b)||(a<b))<<endl;

    //logical not operator me jo real answer aayega uska ulta de deta h aur '!' sign hota h bs
    cout<<"The value of logical not operator (!(a==b)) is:"<<(!(a==b))<<endl;
    
    


    return 0;
 }