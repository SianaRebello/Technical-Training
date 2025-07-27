#include <iostream>
using namespace std;

void sumOfSquares()
 {
    int n, sum = 0;
    cin >> n;
    while (n > 0)
     {
        int d = n % 10;
        sum =sum+( d * d);
        n =n/10;
    }
    cout << sum << endl;
}

int main()
 {
    sumOfSquares();
    return 0;
}
