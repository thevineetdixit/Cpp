#include<iostream>
using namespace std;

class Customer 
{
    string name;
    int account_number;
    int balance;

    public:
    //Default constructor 
    Customer()
    {
       name = "Rohit";
       account_number = 5;
       balance = 100;

    }
    // parameterised  constructor
    Customer(string a, int b, int c)
    {
       name = a;
       account_number = b;
       balance = c;
    }
    // constructor overloading
    Customer(string a, int b)
    {
        name =a;
        account_number =b;
        balance = 50;

    }
// Inline constructor
inline Customer(string a, int b, int c): name(a),account_number,balance;
    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }


};

int main()
{
    Customer A1;
    Customer A2("Rohit",23,1000);
    A2.display();
    
}