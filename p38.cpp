#include <iostream>
using namespace std;

void printDoWhile() {
    int i = 1;
    do {
        cout << i << endl;
        i++;
    } while (i <= 10);
}

int main() {
    printDoWhile();
    return 0;
}
