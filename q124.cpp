#include <iostream>
#include <string>
using namespace std;

void isValidUserId() {
    string s;
    getline(cin, s);
    if (!isalpha(s[0])) {
        cout << false << endl;
        return;
    }
    for (char c : s) {
        if (!isalnum(c) && c != '_') {
            cout << false << endl;
            return;
        }
    }
    cout << true << endl;
}

int main() {
    isValidUserId();
    return 0;
}