#include <iostream>
using namespace std;

void differencePrimeNonPrimeCount() {
    int n, prime = 0, nonPrime = 0;
    cin >> n;
    while (n > 0) {
        int d = n % 10;
        if (d == 2 || d == 3 || d == 5 || d == 7)
            prime++;
        else
            nonPrime++;
        n /= 10;
    }
    cout << prime - nonPrime << endl;
}

int main() {
    differencePrimeNonPrimeCount();
    return 0;
}
