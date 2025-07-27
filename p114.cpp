#include <iostream>
using namespace std;

void productEvenNonPrimeDigits() {
    int n, product = 1;
    cin >> n;
    while (n > 0) {
        int d = n % 10;
        if (d % 2 == 0 && d != 2)
            product *= d;
        n /= 10;
    }
    cout << product << endl;
}

int main() {
    productEvenNonPrimeDigits();
    return 0;
}
