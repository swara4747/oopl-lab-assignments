#include <iostream>
using namespace std;

class Account {
private:
    float balance;
protected:
    int accNo;
public:
    void setData(int a, float b) {
        accNo = a;
        balance = b;
    }
    void deposit(float amt) {
        if (amt > 0) {
            balance = balance + amt;
            cout << "Deposited\n";
        } else
            cout << "Invalid amount\n";
    }
    void withdraw(float amt) {
        if (amt > 0 && amt <= balance) {
            balance = balance - amt;
            cout << "Withdrawn\n";
        } else
            cout << "Invalid amount or insufficient balance\n";
    }
    void display() {
        cout << "Account No: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Account a;
    int no, choice;
    float bal, amt;

    cout << "Enter account number and opening balance: ";
    cin >> no >> bal;
    a.setData(no, bal);

    do {
        cout << "\n1.Deposit 2.Withdraw 3.Display 4.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter amount: ";
            cin >> amt;
            a.deposit(amt);
            break;
        case 2:
            cout << "Enter amount: ";
            cin >> amt;
            a.withdraw(amt);
            break;
        case 3:
            a.display();
            break;
        case 4:
            cout << "Thank you\n";
            break;
        default:
            cout << "Invalid choice\n";
        }
    } while (choice != 4);

    return 0;
}
