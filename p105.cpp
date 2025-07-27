#include <iostream>
using namespace std;

void differenceSumEvenOddDigits() {
    int n, even = 0, odd = 0;
    cin >> n;
    while (n > 0) {
        int d = n % 10;
        if (d % 2 == 0)
            even += d;
        else
            odd += d;
        n /= 10;
    }
    cout << even - odd << endl;
}

int main() {
    differenceSumEvenOddDigits();
    return 0;
}
