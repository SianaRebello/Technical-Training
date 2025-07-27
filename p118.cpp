#include <iostream>
using namespace std;

void differenceSumProductDigits() {
    int n, sum = 0, product = 1;
    cin >> n;
    while (n > 0) {
        int d = n % 10;
        sum += d;
        product *= d;
        n /= 10;
    }
    cout << sum - product << endl;
}

int main() {
    differenceSumProductDigits();
    return 0;
}
