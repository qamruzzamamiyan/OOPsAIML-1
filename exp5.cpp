#include <bits/stdc++.h>
using namespace std;
class BankAccount {
private:
    int accountNumber;
    double balance;
public:
    BankAccount(int accNum, double initialBalance = 0.0) : accountNumber(accNum), balance(initialBalance) {}
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << "\n";
        } else {
            cout << "Invalid deposit amount!\n";
        }
    }
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << "\n";
        } else {
            cout << "Invalid withdrawal amount or insufficient funds!\n";
        }
    }
    void displayBalance() const {
        cout << "Account " << accountNumber << " Balance: " << balance << "\n";
    }
};
int main() {
    BankAccount account(12345, 1000.0);
    account.displayBalance();
    account.deposit(500.0);
    account.withdraw(200.0);
    account.withdraw(2000.0);
    account.displayBalance();
    return 0;
}