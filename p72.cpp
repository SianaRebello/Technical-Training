#include <iostream>
using namespace std;

void evenoddDigits()
 {
    int n, even = 0, odd = 0;
    cin >> n;
    while (n > 0)
     {
        int d = n % 10;
        if (d % 2 == 0)
            even = 1;
        else
            odd = 1;
        n =n/10;
    }
    if (even && odd)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
 {
    evenOddDigits();
    return 0;
}
