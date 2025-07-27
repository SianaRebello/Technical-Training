#include <iostream>
using namespace std;

void checkVowel() {
    char ch;
    cin >> ch;
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' ||
        ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' ||
        ch == 'u' || ch == 'U')
        cout << "Vowel" << endl;
    else
        cout << "Not a vowel" << endl;
}

int main() {
    checkVowel();
    return 0;
}
