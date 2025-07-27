#include <iostream>
using namespace std;

void oddCubes() 
{
    int n;
    cin >> n;
    while (n > 0)
     {
        int d = n % 10;
        if (d % 2 != 0)
            cout << d * d * d << endl;
        n =n/10;
    }
}

int main() 
{
    oddCubes();
    return 0;
}
