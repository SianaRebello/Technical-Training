#include <iostream>
using namespace std;

void factorial() {
    int n, f = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        f=f*i;
    }
    cout << fact << endl;
}

int main() {
    factorial();
    return 0;
}
