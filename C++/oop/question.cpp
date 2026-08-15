// create a bank class and their details
#include<iostream>
using namespace std;

class Bank {
private:
    int account_no;
    char name[30];
    float balance;

public:
    void readdata();
    void deposit();
    void withdraw();
    void display();
};

void Bank::readdata() {
    cout << "Enter Account Number: ";
    cin >> account_no;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Initial Balance: ";
    cin >> balance;
}

void Bank::deposit() {
    float amount;

    cout << "Enter Deposit Amount: ";
    cin >> amount;

    balance = balance + amount;
}

void Bank::withdraw() {
    float amount;

    cout << "Enter Withdraw Amount: ";
    cin >> amount;

    if (amount <= balance) {
        balance = balance - amount;
    }
    else {
        cout << "Insufficient Balance" << endl;
    }
}

void Bank::display() {
    cout << "\n----- Account Details -----" << endl;
    cout << "Account Number : " << account_no << endl;
    cout << "Name           : " << name << endl;
    cout << "Balance        : " << balance << endl;
}

int main() {
    Bank b1;

    b1.readdata();
    b1.deposit();
    b1.withdraw();
    b1.display();

    return 0;
}