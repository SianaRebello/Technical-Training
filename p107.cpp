#include <iostream>
using namespace std;

void reverseOddDigitsOnly() {
    int n;
    cin >> n;
    while (n > 0) {
        int d = n % 10;
        if (d % 2 != 0)
            cout << d << endl;
        n /= 10;
    }
}

int main() {
    reverseOddDigitsOnly();
    return 0;
}
