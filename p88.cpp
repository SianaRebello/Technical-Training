#include <iostream>
using namespace std;

void countOddPrime() 
{
    int n, count = 0;
    cin >> n;
    while (n > 0)
     {
        int d = n % 10;
        if (d == 3 || d == 5 || d == 7)
            count++;
        n =n/10;
    }
    cout << count << endl;
}

int main() 
{
    countOddPrime();
    return 0;
}
