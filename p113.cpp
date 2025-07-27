#include <iostream>
using namespace std;

void productOddPrimeDigits() {
    int n, product = 1;
    cin >> n;
    while (n > 0) {
        int d = n % 10;
        if (d == 3 || d == 5 || d == 7)
            product *= d;
        n /= 10;
    }
    cout << product << endl;
}

int main() {
    productOddPrimeDigits();
    return 0;
}
