#include <iostream>
using namespace std;

void sumN() {
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum =sum+i;
    }
    cout << sum << endl;
}

int main() {
    sumN();
    return 0;
}
