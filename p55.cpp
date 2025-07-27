#include <iostream>
using namespace std;

void printEvenDigits() {
    int n, d;
    cin >> n;
    while (n > 0) {
        d = n % 10;
        if (d % 2 == 0)
            cout << d << endl;
        n =n/10;
    }
}

int main() {
    printEvenDigits();
    return 0;
}
