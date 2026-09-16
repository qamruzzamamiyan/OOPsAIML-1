#include <bits/stdc++.h>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string customerName;
    double balance;

public:

    BankAccount(int accNo, string name, double bal) {
        accountNumber = accNo;
        customerName = name;
        balance = bal;
    }

    
    friend void compareBalance(const BankAccount &a1, const BankAccount &a2);
};
void compareBalance(const BankAccount &a1, const BankAccount &a2) {
    if (a1.balance > a2.balance) {
        cout << "Account Holder with Higher Balance: "
             << a1.customerName << endl;
        cout << "Balance: " << a1.balance << endl;
    }
    else if (a2.balance > a1.balance) {
        cout << "Account Holder with Higher Balance: "
             << a2.customerName << endl;
        cout << "Balance: " << a2.balance << endl;
    }
    else {
        cout << "Both accounts have the same balance." << endl;
    }
}

int main() {
	// your code goes here
BankAccount account1(101, "Rahul", 50000);
    BankAccount account2(102, "Aman", 75000);

    compareBalance(account1, account2);

    return 0;
}
