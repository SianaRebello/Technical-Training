#include <iostream>
using namespace std;

void checkEven() {
    int n;
    cin >> n;
    if (n % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Not Even" << endl;
}

int main() {
    checkEven();
    return 0;
}
