#include <iostream>
using namespace std;

void checkPass() {
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    if (s1 >= 35 && s2 >= 35 && s3 >= 35)
        cout << "true" << endl;
    else
        cout << "false" << endl;
}

int main() {
    checkPass();
    return 0;
}
