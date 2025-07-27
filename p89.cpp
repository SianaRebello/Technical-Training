#include <iostream>
using namespace std;

void printEvenPrime()
 {
    int n;
    cin >> n;
    while (n > 0)
     {
        if (n % 10 == 2)
            cout << 2 << endl;
        n = n/10;
    }
}

int main() {
    printEvenPrime();
    return 0;
}
