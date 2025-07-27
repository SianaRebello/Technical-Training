#include <iostream>
#include <string>
using namespace std;

void printDigitsFromString() {
    string s;
    getline(cin, s);
    for (char c : s) {
        if (isdigit(c)) cout << c << " ";
    }
    cout << endl;
}

int main() {
    printDigitsFromString();
    return 0;
}