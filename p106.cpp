#include <iostream>
using namespace std;

void reverseEvenDigitsOnly() {
    int n;
    cin >> n;
    while (n > 0) {
        int d = n % 10;
        if (d % 2 == 0)
            cout << d << endl;
        n /= 10;
    }
}

int main() {
    reverseEvenDigitsOnly();
    return 0;
}
