#include<iostream>
#include<string>
using namespace std ;

class student
{//by default ye private hota h 
    public:
    string name ;
    int age, roll_number;
    string grade;
};//class is a user defined datatype 
// a ; is must to be put after class it is its syntax

int main()
{
    student S1;
    S1.name = "VINEET";
    S1.age = 10;
    S1.roll_number = 21;
    S1.grade ="A+";

    cout<<S1.age<<" ";
    student S2;
    S2.name = "mohit";
    S2.age = 12;
    S2.roll_number = 121;
    S2.grade = "A+";
}
