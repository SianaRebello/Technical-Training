#include <iostream>
#include <string>
using namespace std;

void printSpecialCharsFromString() {
    string s;
    getline(cin, s);
    for (char c : s) {
        if (!isalnum(c) && !isspace(c)) cout << c << " ";
    }
    cout << endl;
}

int main() {
    printSpecialCharsFromString();
    return 0;
}