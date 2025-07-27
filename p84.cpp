#include <iostream>
using namespace std;

void printNotPrime()
 {
    int n;
    cin >> n;
    while (n > 0) 
    {
        int d = n % 10;
        if (!(d == 2 || d == 3 || d == 5 || d == 7))
            cout << d << endl;
        n =n/10;
    }
}

int main()
 {
    printNotPrime();
    return 0;
}
