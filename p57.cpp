#include <iostream>
using namespace std;

void countEvenOddDigits() {
    int n, even = 0, odd = 0;
    cin >> n;
    while (n > 0) {
        int d = n % 10;
        if (d % 2 == 0)
            even++;
        else
            odd++;
        n =n/10;
    }
    cout << "Even: " << even << " Odd: " << odd << endl;
}

int main() {
    countEvenOddDigits();
    return 0;
}
