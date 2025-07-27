#include <iostream>
using namespace std;

void printEven() {
    int n;
    cin >> n;
    for (int i = 2; i <= n; i += 2) {
        cout << i << endl;
    }
}

int main() {
    printEven();
    return 0;
}
