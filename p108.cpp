#include <iostream>
using namespace std;

void countAndPrintNonZeroDigits() {
    int n, count = 0;
    cin >> n;
    while (n > 0) {
        int d = n % 10;
        if (d != 0) {
            cout << d << endl;
            count++;
        }
        n /= 10;
    }
    cout << count << endl;
}

int main() {
    countAndPrintNonZeroDigits();
    return 0;
}
