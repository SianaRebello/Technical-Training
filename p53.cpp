#include <iostream>
using namespace std;

void countEvenDigits() {
    int n, d, count = 0;
    cin >> n;
    while (n > 0) {
        d = n % 10;
        if (d % 2 == 0)
            count++;
        n =n/10;
    }
    cout << count << endl;
}

int main() {
    countEvenDigits();
    return 0;
}
