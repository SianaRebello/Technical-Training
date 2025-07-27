#include <iostream>
using namespace std;

void countZeroDigits() {
    int n, count = 0;
    cin >> n;
    while (n > 0) {
        if (n % 10 == 0)
            count++;
        n =n/10;
    }
    cout << count << endl;
}

int main() {
    countZeroDigits();
    return 0;
}
