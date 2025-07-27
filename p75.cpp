#include <iostream>
using namespace std;

void reverseDigits()
 {
    int n;
    cin >> n;
    while (n > 0)
     {
        cout << n % 10 << endl;
        n =n/10;
    }
}

int main()
 {
    reverseDigits();
    return 0;
}
