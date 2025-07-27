#include <iostream>
#include <string>
using namespace std;

void printPrimeDigits() {
    string s;
    getline(cin, s);
    for (char c : s) {
        if (c == '2' || c == '3' || c == '5' || c == '7') cout << c << " ";
    }
    cout << endl;
}

int main() {
    printPrimeDigits();
    return 0;
}