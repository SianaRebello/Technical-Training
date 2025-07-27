#include <iostream>
using namespace std;

void printOdd() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i += 2) {
        cout << i << endl;
    }
}

int main() {
    printOdd();
    return 0;
}
