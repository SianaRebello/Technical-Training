#include <iostream>
using namespace std;

void countDigits() {
    int n, count = 0;
    cin >> n;
    while (n != 0) {
        count++;
        n /= 10;
    }
    cout << count << endl;
}

int main() {
    countDigits();
    return 0;
}
