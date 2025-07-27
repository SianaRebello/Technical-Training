#include <iostream>
using namespace std;

void evenOdd() {
    int n;
    cin >> n;
    if ((n / 2) * 2 == n)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;
}

int main() {
    evenOdd();
    return 0;
}
