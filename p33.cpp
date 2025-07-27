#include <iostream>
using namespace std;

void withdrawOperation() {
    int balance = 5000, withdraw;
    cin >> withdraw;
    if (withdraw > 0) {
        if (withdraw <= balance)
            cout << "Withdrawal successful" << endl;
        else
            cout << "Insufficient balance" << endl;
    } else {
        cout << "Invalid amount" << endl;
    }
}

int main() {
    withdrawOperation();
    return 0;
}
