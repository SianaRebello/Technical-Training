#include <iostream>
using namespace std;

void isPalindrome() {
    int n, temp, rev = 0;
    cin >> n;
    temp = n;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n =n/10;
    }
    if (rev == temp)
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;
}

int main() {
    isPalindrome();
    return 0;
}
