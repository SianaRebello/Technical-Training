#include <iostream>
#include <cmath>
using namespace std;

void roots() {
    int a, b, c;
    cin >> a >> b >> c;
    float d = b * b - 4 * a * c;
    if (d >= 0) {
        float r1 = (-b + sqrt(d)) / (2 * a);
        float r2 = (-b - sqrt(d)) / (2 * a);
        cout << r1 << " " << r2 << endl;
    } else {
        cout << "Complex roots" << endl;
    }
}

int main() {
    roots();
    return 0;
}
