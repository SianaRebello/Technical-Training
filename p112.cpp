#include <iostream>
using namespace std;

void productEvenPrimeDigits() {
    int n, product = 1;
    cin >> n;
    while (n > 0) {
        if (n % 10 == 2)
            product *= 2;
        n /= 10;
    }
    cout << product << endl;
}

int main() {
    productEvenPrimeDigits();
    return 0;
}
