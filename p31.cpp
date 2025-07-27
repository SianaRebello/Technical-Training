#include <iostream>
using namespace std;

void conExample() {
    int a;
    cin >> a;
    if (a > 0)
        cout << "Positive" << endl;
    else
        cout << "Negative or Zero" << endl;

    a % 2 == 0 ? cout << "Even" << endl : cout << "Odd" << endl;
}

int main() {
    conExample();
    return 0;
}
