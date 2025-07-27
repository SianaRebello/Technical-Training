#include <iostream>
using namespace std;

void printRangeDoWhile() {
    int start, end;
    cin >> start >> end;
    do {
        cout << start << endl;
        start++;
    } while (start <= end);
}

int main() {
    printRangeDoWhile();
    return 0;
}
