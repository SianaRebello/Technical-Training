#include <iostream>
#include <string>
using namespace std;

void reverseString() {
    string s;
    getline(cin, s);
    for (int i = s.length() - 1; i >= 0; i--) cout << s[i];
    cout << endl;
}

int main() {
    reverseString();
    return 0;
}