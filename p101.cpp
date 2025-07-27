#include <iostream>
using namespace std;

void sumCubeOddDigits() {
    int n, sum = 0;
    cin >> n;
    while (n > 0) {
        int d = n % 10;
        if (d % 2 != 0)
            sum += d * d * d;
        n /= 10;
    }
    cout << sum << endl;
}

int main() {
    sumCubeOddDigits();
    return 0;
}
