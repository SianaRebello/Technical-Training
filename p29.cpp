#include <iostream>
using namespace std;

void posOrNeg() {
    int n;
    cin >> n;
    if (n > 0)
        cout << "Positive" << endl;
    else
        cout << "Negative" << endl;
}

int main() {
    posOrNeg();
    return 0;
}
