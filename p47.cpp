#include <iostream>
using namespace std;

void sumDigits() {
    int n, sum = 0,r;
    cin >> n;
    while (n>0) {
        r= n % 10;
        sum=sum+r;
        n=n/10;
    }
    cout << sum << endl;
}

int main() {
    sumDigits();
    return 0;
}
