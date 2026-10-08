//what is encapsulation in c++?
//wrapping up of data and info while controlling their access

#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    double balance;   // private data (protected)

public:
    // Constructor
    BankAccount(string name, int accNo, double bal) {
        accountHolder = name;
        accountNumber = accNo;
        balance = bal;
    }

    // Deposit money
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    // Withdraw money
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    // Getter function to view balance
    double getBalance() {
        return balance;
    }

    // Display account info
    void display() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc("Amit", 12345, 1000);

    acc.display();
    acc.deposit(500);
    acc.withdraw(300);

    cout << "Current Balance: " << acc.getBalance() << endl;

    return 0;
}


//what is static data type -> that means the one data which is created only one time because it is used by all and hence none other copy is created 
