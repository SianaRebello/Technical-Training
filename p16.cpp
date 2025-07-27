#include <iostream>
using namespace std;

void swap() {
    int a, b, temp;
    cin >> a >> b;
    temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << endl;
}

int main() {
    swap();
    return 0;
}
