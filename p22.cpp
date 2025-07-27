#include <iostream>
using namespace std;

void isEven() {
    int n;
    cin >> n;
    if (n % 2 == 0)
        cout << "true" << endl;
    else
        cout << "false" << endl;
}

int main() {
    isEven();
    return 0;
}
