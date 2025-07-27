#include <iostream>
using namespace std;

bool isPrime(int d)
 {
    return d == 2 || d == 3 || d == 5 || d == 7;
}

void sumPrimeDigits()
 {
    int n, count = 0, sum = 0;
    cin >> n;
    while (n > 0) 
    {
        int d = n % 10;
        if (isPrime(d))
         {
            count++;
            sum =sum+d;
        }
        n =n/10;
    }
    cout << count << " " << sum << endl;
}

int main() 
{
    sumPrimeDigits();
    return 0;
}
