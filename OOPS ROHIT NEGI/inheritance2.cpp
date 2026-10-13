#include <bits/stdc++.h>
using namespace std;

class Human 
{
    public:
    string name ;
    int age ,weight;//agr ye protected hote to child class wala bhi protected leta aur user directlu change nhi krpata child me data

};

class Student : protected  Human //or protected or privae
{
    //parent ka data hgiher security rhega 
    private:
    int roll_no , fees;
    public:
    //what we can do is we can make function which is public which can modify our class protected or private data
    void fun(string n,int a,int w)
    {
        name = n;
        age = a;
        weight = w;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Student A;
    A.name = "rohit";//not accessible cuase it is protected 

    return 0;
}