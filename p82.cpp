#include <iostream>
using namespace std;

void sumNotPrime() 
{
    int n, sum = 0;
    cin >> n;
    while (n > 0)
     {
        int d = n % 10;
        if (!(d == 2 || d == 3 || d == 5 || d == 7))
            sum =sum+d;
        n =n/10;
    }
    cout << sum << endl;
}

int main() 
{
    sumNotPrime();
    return 0;
}
