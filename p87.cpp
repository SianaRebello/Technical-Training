#include <iostream>
using namespace std;

void countEvenPrime()
 {
    int n, count = 0;
    cin >> n;
    while (n > 0) 
    {
        if (n % 10 == 2)
            count++;
        n =n/10;
    }
    cout << count << endl;
}

int main() 
{
    countEvenPrime();
    return 0;
}
