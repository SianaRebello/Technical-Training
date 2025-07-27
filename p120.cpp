#include <iostream>
using namespace std;

void diffEvenOddPrimeCount() {
    int n, evenPrime = 0, oddPrime = 0;
    cin >> n;
    while (n > 0) {
        int d = n % 10;
        if (d == 2)
            evenPrime++;
        else if (d == 3 || d == 5 || d == 7)
            oddPrime++;
        n /= 10;
    }
    cout << evenPrime - oddPrime << endl;
}

int main() {
    diffEvenOddPrimeCount();
    return 0;
}
