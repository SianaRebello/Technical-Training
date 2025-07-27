#include <iostream>
using namespace std;

void studentGrade() {
    int marks;
    cin >> marks;
    if (marks >= 90)
        cout << "A" << endl;
    else if (marks >= 80)
        cout << "B" << endl;
    else if (marks >= 70)
        cout << "C" << endl;
    else if (marks >= 60)
        cout << "D" << endl;
    else
        cout << "Fail" << endl;
}

int main() {
    studentGrade();
    return 0;
}
