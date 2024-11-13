#include <iostream>
#include <stdexcept>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initial_balance) : balance(initial_balance) {}

    // Function to withdraw an amount
    void withdraw(double amount) {
        if (amount > balance) {
            throw runtime_error("Insufficient funds for withdrawal.");
        }
        balance -= amount;
        cout << "Withdrawal successful. New balance: $" << balance << endl;
    }
};

// Function to process withdrawal, which catches and rethrows exceptions
void processWithdrawal(BankAccount& account, double amount) {
    try {
        account.withdraw(amount);
    }
    catch (const runtime_error& e) {
        cout << "Error in processWithdrawal: " << e.what() << endl;
        throw; // Rethrow the same exception to be handled at a higher level
    }
}

int main() {
    BankAccount account(500.0); // Initial balance of $500

    try {
        processWithdrawal(account, 600.0); // Attempt to withdraw $600
    }
    catch (const runtime_error& e) {
        cout << "Transaction failed: " << e.what() << endl;
    }

    cout << "Thank you for using our banking services!" << endl;
    return 0;
}
