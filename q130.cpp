#include <iostream>
#include <string>
using namespace std;

void printNumbersFromString() {
    string s;
    getline(cin, s);
    string num = "";
    for (char c : s) {
        if (isdigit(c)) num += c;
        else {
            if (!num.empty()) {
                cout << num << " ";
                num = "";
            }
        }
    }
    if (!num.empty()) cout << num;
    cout << endl;
}

int main() {
    printNumbersFromString();
    return 0;
}