#include <iostream>
using namespace std;

void squareEven()
 {
    int n;
    cin >> n;
    while (n > 0)
     {
        int d = n % 10;
        if (d % 2 == 0)
            cout << d * d << endl;
        n = n/10;
    }
}

int main() 
{
    squareEven();
    return 0;
}
