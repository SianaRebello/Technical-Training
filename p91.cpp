#include <iostream>
using namespace std;

void sumOfCubes()
 {
    int n, sum = 0;
    cin >> n;
    while (n > 0)
     {
        int d = n % 10;
        sum =sum+( d * d * d);
        n =n/10;
    }
    cout << sum << endl;
}

int main()
 {
    sumOfCubes();
    return 0;
}
