#include <iostream>
using namespace std;

void smallest() {
    int a, b;
    cin >> a >> b;
    if (a < b)
        cout << a << endl;
    else
        cout << b << endl;
}

int main() {
    smallest();
    return 0;
}
