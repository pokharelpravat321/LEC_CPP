#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    BankAccount(const string& holder, double initialBalance) : accountHolder(holder), balance(initialBalance) {}

    void withdraw(double amount) {
        if (amount > balance) {
            throw out_of_range("Insufficient balance");
        }
        balance -= amount;
        cout << "Withdrawal of $" << amount << " successful. Remaining balance: $" << balance << endl;
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    string accountHolder = "John Doe";
    double initialBalance = 1000.0;

    BankAccount account(accountHolder, initialBalance);

    try {
        cout << "Current balance: $" << account.getBalance() << endl;
        double withdrawalAmount;
        cout << "Enter withdrawal amount: ";
        cin >> withdrawalAmount;

        account.withdraw(withdrawalAmount);
    } catch (const out_of_range& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
