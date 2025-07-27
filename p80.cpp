#include <iostream>
using namespace std;

bool isPrime(int d)
 {
    return d == 2 || d == 3 || d == 5 || d == 7;
}

void nonPrimeDigits()
 {
    int n;
    cin >> n;
    while (n > 0)
     {
        int d = n % 10;
        if (!isPrime(d))
            cout << d << endl;
        n =n/10;
    }
}

int main() 
{
    nonPrimeDigits();
    return 0;
}
