#include <bits/stdc++.h>
using namespace std;

class Customer
{
    string name;
    int account_number,balance;
    public:
    static int total ;//this remains same for all the copies of this class customer
    // everyone uses the same reference 
    static int total_bal;

    public:
    Customer(string name,int account_number,int balance)
    {
        this->name = name;
        this-> account_number = account_number;
        this->balance = balance;
        total++;
        total_bal+= balance;
    }

    static void access_static()
    {
        //always remember once you write static you cant access non static data
        cout<<"total customers = "<<total<<endl;
    }

    static void static_bal()
    {
        //always remember once you write static you cant access non static data
        cout<<"total customers = "<<total_bal<<endl;
    }

    void display()
    {
        cout<<total<<endl;
    }
};
int Customer:: total = 0;//this is iniitialised outside like this 
int Customer::total_bal = 0;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Customer A1("rohit",1,1000);
    Customer A2("mohit",2,1800);

    A1.display();
    A2.display();

    Customer b("randi",1,122);
    b.display();

    //we can access this static data outside the class by first making it public in class and then like this below
    Customer::total = 5;
    b.display();
    //statics are part of class,so now how can we display or access static data inside a function
    // for that we have static functions 

    Customer::access_static();//you have to use :: to call static functions in cpp
    Customer::static_bal();




    

    return 0;
}