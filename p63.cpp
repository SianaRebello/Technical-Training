#include <iostream>
using namespace std;

void sumDigits() {
    int n, sum = 0;
    cin >> n;
    while (n > 0)
     {
        int d = n % 10;
        if (d % 2 == 0 && d % 3 == 0)
            sum =sum+d;
        n =n/10;
    }
    cout << sum << endl;
}

int main() {
    sumDigits();
    return 0;
}
