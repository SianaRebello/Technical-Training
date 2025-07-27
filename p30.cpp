#include <iostream>
using namespace std;

void evenOdd() {
    int n;
    cin >> n;
    n % 2 == 0 ? cout << "Even" << endl : cout << "Odd" << endl;
}

int main() {
    evenOdd();
    return 0;
}
