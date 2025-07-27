#include <iostream>
using namespace std;

void checkEvenOdd() {
    int n;
    cin >> n;
    if (n % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;
}

int main() {
    checkEvenOdd();
    return 0;
}
