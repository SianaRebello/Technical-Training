#include <iostream>
using namespace std;

void oddDigits()
 {
    int n, flag = 1;
    cin >> n;
    while (n > 0)
     {
        if ((n % 10) % 2 == 0) {
            flag = 0;
            break;
        }
        n=n/10;
    }
    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main() {
    oddDigits();
    return 0;
}
