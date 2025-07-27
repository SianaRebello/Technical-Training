#include <iostream>
using namespace std;

void differenceDigitSquareCube() {
    int n, sqSum = 0, cubeSum = 0;
    cin >> n;
    while (n > 0) {
        int d = n % 10;
        sqSum += d * d;
        cubeSum += d * d * d;
        n /= 10;
    }
    cout << sqSum - cubeSum << endl;
}

int main() {
    differenceDigitSquareCube();
    return 0;
}
