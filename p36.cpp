#include <iostream>
using namespace std;

void atm() {
    int choice, balance = 1000, amount;
    cin >> choice;
    if (choice == 1) {
        cin >> amount;
        balance += amount;
        cout << "Deposited" << endl;
    } else if (choice == 2) {
        cin >> amount;
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn" << endl;
        } else {
            cout << "Insufficient balance" << endl;
        }
    } else if (choice == 3) {
        cout << "Balance = " << balance << endl;
    } else if (choice == 4) {
        cout << "PIN changed" << endl;
    } else {
        cout << "Invalid option" << endl;
    }
}

int main() {
    atm();
    return 0;
}
