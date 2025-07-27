#include <iostream>
using namespace std;

void sumCubeEven() 
{
    int n, sum = 0;
    cin >> n;
    while (n > 0) 
    {
        int d = n % 10;
        if (d % 2 == 0)
            sum =sum+( d * d * d);
        n =n/10;
    }
    cout << sum << endl;
}

int main() 
{
    sumCubeEven();
    return 0;
}
