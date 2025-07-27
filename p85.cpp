#include <iostream>
using namespace std;

void sumEvenPrime()
 {
    int n, sum = 0;
    cin >> n;
    while (n > 0) 
    {
        int d = n % 10;
        if (d == 2)
            sum = sum+d;
        n =n/10;
    }
    cout << sum << endl;
}

int main() 
{
    sumEvenPrime();
    return 0;
}
