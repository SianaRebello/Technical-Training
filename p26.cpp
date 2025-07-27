#include <iostream>
using namespace std;

void greatest() {
    int a, b;
    cin >> a >> b;
    if (a > b)
        cout << a << endl;
    else
        cout << b << endl;
}

int main() {
    greatest();
    return 0;
}
