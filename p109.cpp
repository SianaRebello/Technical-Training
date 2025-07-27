#include <iostream>
using namespace std;

void productNonZeroDigits() {
    int n, product = 1;
    cin >> n;
    while (n > 0) {
        int d = n % 10;
        if (d != 0)
            product *= d;
        n /= 10;
    }
    cout << product << endl;
}

int main() {
    productNonZeroDigits();
    return 0;
}
