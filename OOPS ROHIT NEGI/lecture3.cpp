//this lecture is mainly based on static keyword,encap 

#include<iostream>
using namespace std;

class Customer{
    public:
    string name;
    int account_number;
    int ballance;
    static int total_customer;

    Customer(string name,int account_number,int ballance)
    {
        this->name = name;
        this->account_number = account_number;
        this->ballance = ballance;    
        total_customer++;    
    }

    void display()
    {
        cout<<name<<" "<<account_number<<" "<<ballance<<" "<<endl;
    }
};

//static data member must be defined outside the class
int Customer::total_customer =0;

int main()
{
    Customer A ("Rohit",1,10);
    Customer B ("Shubham",2,20);
    Customer C ("Rahul",3,30);

    A.display();
    B.display();    
    C.display();
    //static member can be accessed without creating object
    cout<<"Total Customers: "<<Customer::total_customer<<endl;

    return 0;
}