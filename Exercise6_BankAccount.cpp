// Exercise 6 — BankAccount
// Fields: accountNumber, accountHolder, balance
// Constructor: BankAccount(string accountNumber, string accountHolder, double balance)
// Methods: display(), deposit(), withdraw()

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
public:
    string accountNumber;
    string accountHolder;
    double balance;

    // Parameterized Constructor
    BankAccount(string accountNumber, string accountHolder, double balance) {
        this->accountNumber = accountNumber;
        this->accountHolder = accountHolder;
        this->balance = balance;
    }

    // Method to display account details
    void display() {
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Holder : " << accountHolder << endl;
        cout << "Balance        : Rs. " << balance << endl;
    }

    // Method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Rs. " << amount << " deposited successfully." << endl;
            cout << "Updated Balance: Rs. " << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Method to withdraw money
    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount." << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance! Withdrawal failed." << endl;
        } else {
            balance -= amount;
            cout << "Rs. " << amount << " withdrawn successfully." << endl;
            cout << "Updated Balance: Rs. " << balance << endl;
        }
    }
};

int main() {
    // Create a BankAccount object
    BankAccount acc("SBI123456789", "Niharika", 25000.00);

    cout << "===== Initial Account Details =====" << endl;
    acc.display();

    cout << "\n===== Depositing Rs. 5000 =====" << endl;
    acc.deposit(5000);

    cout << "\n===== Withdrawing Rs. 8000 =====" << endl;
    acc.withdraw(8000);

    cout << "\n===== Attempting to Withdraw Rs. 50000 (Insufficient) =====" << endl;
    acc.withdraw(50000);

    cout << "\n===== Final Account Details =====" << endl;
    acc.display();

    return 0;
}
