#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;
    static const int MAX_TRANSACTIONS = 10; // Fixed size array
    int transactionCount = 0;

public:
    // Constructor
    BankAccount(string name, double initialBalance) {
        accountHolder = name;
        balance = initialBalance;
    }

    // Nested Transaction Class
    class Transaction {
    public:
        string type;
        double amount;

        Transaction() { // Default constructor
            type = "";
            amount = 0;
        }

        Transaction(string t, double amt) {
            type = t;
            amount = amt;
        }

        void displayTransaction() {
            cout << type << ": Rs." << amount << endl;
        }
    };

    Transaction transactions[MAX_TRANSACTIONS]; // Array to store transactions

    // Deposit money
    void deposit(double amount) {
        balance += amount;
        if (transactionCount < MAX_TRANSACTIONS) {
            transactions[transactionCount++] = Transaction("Deposit", amount);
        }
    }

    // Withdraw money
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            if (transactionCount < MAX_TRANSACTIONS) {
                transactions[transactionCount++] = Transaction("Withdraw", amount);
            }
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    // Display account balance
    void showBalance() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Current Balance: Rs." << balance << endl;
    }

    // Show all transactions
    void showTransactions() {
        cout << "Transaction History:" << endl;
        for (int i = 0; i < transactionCount; i++) {
            transactions[i].displayTransaction();
        }
        if (transactionCount == 0) {
            cout << "No transactions yet." << endl;
        }
    }
};

int main() {
    // Creating a bank account
    BankAccount account("Abhay Shinde", 1000.0);
    account.showBalance();

    // Performing transactions
    account.deposit(500);
    account.withdraw(200);
    account.withdraw(1500); // This should show "Insufficient balance"

    // Display final balance and transactions
    account.showBalance();
    account.showTransactions();

    return 0;
}
