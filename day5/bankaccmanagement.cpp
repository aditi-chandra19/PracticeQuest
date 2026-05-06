#include <iostream>
using namespace std;

// Approach :
// 1. Ye class aur object based prog hai
// 2. Parameterized constructor account create karne ke liye use hua 
// 3. Destructor account destroy hone ka message dikhata hai
// 4. Menu ko handle karne ke liye switch case use hua hai
// 5. Deposit, withdraw aur balance check ke liye alag member functions use hue hain
// 6. do-while loop menu ko baar-baar chalata hai jab tak user exit na kare

class BankAccount {
    // Ye data members account number aur balance store karte hain
    int accNo;
    float balance;

public:
    // Ye parameterized constructor hai
    BankAccount(int a, float b) {
        accNo = a;
        balance = b;
        cout << "Bank account created" << endl;
    }

    // Ye destructor hai
    ~BankAccount() {
        cout << "Bank account destroyed" << endl;
    }

    // Is function se paise deposit hote hain
    void deposit(float amount) {
        balance = balance + amount;
        cout << "Amount deposited successfully" << endl;
    }

    // Is function se paise withdraw hote hain
    void withdraw(float amount) {
        if (amount > balance) {
            cout << "Insufficient balance" << endl;
        } else {
            balance = balance - amount;
            cout << "Amount withdrawn successfully" << endl;
        }
    }

    // Is function se current balance show hota hai
    void showBalance() {
        cout << "Balance = " << balance << endl;
    }
};

int main() {
    // Main function me use hone wale variables
    int accNo, choice;
    float openingBalance, amount;

    // Starting me user account details enter karega
    cout << "Enter account number: ";
    cin >> accNo;

    cout << "Enter opening balance: ";
    cin >> openingBalance;

    // Yaha object parameterized constructor se create ho raha hai
    BankAccount b1(accNo, openingBalance);

    // do-while loop ki wajah se menu kam se kam ek baar zarur chalega
    do {
        cout << "\n1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        // Switch case user ki choice ke hisaab se kaam karega
        switch (choice) {
        case 1:
            // Ye deposit wala option hai
            cout << "Enter amount to deposit: ";
            cin >> amount;
            b1.deposit(amount);
            break;

        case 2:
            // Ye withdraw wala option hai
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            b1.withdraw(amount);
            break;

        case 3:
            // Ye balance check karne wala option hai
            b1.showBalance();
            break;

        case 4:
            // Ye program se bahar nikalne wala option hai
            cout << "Thank you" << endl;
            break;

        default:
            // Agar galat choice enter ho to ye chalega
            cout << "Invalid choice" << endl;
        }
    } while (choice != 4);

    // Program yaha end hoga aur destructor automatically call hoga
    return 0;
}
