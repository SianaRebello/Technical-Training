#include <iostream>
using namespace std;

void differenceEvenOddDigitCount() {
    int n, even = 0, odd = 0;
    cin >> n;
    while (n > 0) {
        if ((n % 10) % 2 == 0)
            even++;
        else
            odd++;
        n /= 10;
    }
    cout << even - odd << endl;
}

int main() {
    differenceEvenOddDigitCount();
    return 0;
}
