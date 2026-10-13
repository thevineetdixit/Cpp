#include <bits/stdc++.h>
using namespace std;

class Human 
{
    string name;
    int age ;

    void work()
    {
        cout<<"I am working "<<endl;
    }
};

class Student: public Human
{
    int roll_no ,fees;

    public:
    // Student(string name,int age,int roll_no,int fees)
    // {
    //     this-> name = name;
    //     this->age = age;
    //     this-> roll_no = roll_no;
    //     this-> fees = fees;
    // }

    //constructor pehle parent ka then child ka
    // destructor pehle child ka then parent 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}