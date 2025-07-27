#include <iostream>
using namespace std;

void decreasingDigits()
 {
    int n, last = -1, flag = 1;
    cin >> n;
    while (n > 0)
     {
        int d = n % 10;
        if (d <= last) {
            flag = 0;
            break;
        }
        last = d;
        n =n/10;
    }
    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main() {
    decreasingDigits();
    return 0;
}
