#include <iostream>
#include <limits>

using namespace std;

int main() {
    double balance = 1000.0;
    int choice;
    double amount;

    while (true) {
        cout << "\n===== ATM MENU =====\n";
        cout << "1. Withdraw\n";
        cout << "2. Deposit\n";
        cout << "3. Balance Check\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

     
        switch (choice) {
            case 1:
                cout << "Enter amount to withdraw: ";
                cin >> amount;

                if (amount <= 0) {
                    cout << "Please enter a valid amount.\n";
                } else if (amount > balance) {
                    cout << "Insufficient balance.\n";
                } else {
                    balance -= amount;
                    cout << "Withdrawal successful.\n";
                    cout << "Remaining balance: " << balance << endl;
                }
                break;

            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;

                if (amount <= 0) {
                    cout << "Please enter a valid amount.\n";
                } else {
                    balance += amount;
                    cout << "Deposit successful.\n";
                    cout << "Updated balance: " << balance << endl;
                }
                break;

            case 3:
                cout << "Current balance: " << balance << endl;
                break;

            case 4:
                cout << "Thank you for using the ATM.\n";
                return 0;

            default:
                cout << "Invalid choice. Please select between 1 and 4.\n";
        }
    }

    return 0;
}
