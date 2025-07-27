#include <iostream>
using namespace std;

void isPositive() {
    int n;
    cin >> n;
    if (n >= 0)
        cout << "true" << endl;
    else
        cout << "false" << endl;
}

int main() {
    isPositive();
    return 0;
}
