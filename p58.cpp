#include <iostream>
using namespace std;

void sumEvenOddDigits() {
    int n, sumeven = 0, sumodd = 0;
    cin >> n;
    while (n > 0) {
        int d = n % 10;
        if (d % 2 == 0)
            sumeven += d;
        else
            sumodd += d;
        n =n/10;
    }
    cout << "Even sum: " << sumeven << " Odd sum: " << sumodd << endl;
}

int main() {
    sumEvenOddDigits();
    return 0;
}
