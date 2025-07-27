#include <iostream>
using namespace std;

void productOfDigits() {
    int n, product = 1;
    cin >> n;
    while (n > 0) {
        int d = n % 10;
        product *= d;
        n /= 10;
    }
    cout << product << endl;
}

int main() {
    productOfDigits();
    return 0;
}
