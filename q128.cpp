#include <iostream>
#include <string>
using namespace std;

void isPalindromeString() {
    string s;
    getline(cin, s);
    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            cout << false << endl;
            return;
        }
    }
    cout << true << endl;
}

int main() {
    isPalindromeString();
    return 0;
}