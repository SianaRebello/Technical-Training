#include <iostream>
using namespace std;

void printRangeWhile() {
    int start, end;
    cin >> start >> end;
    while (start <= end) {
        cout << start << endl;
        start++;
    }
}

int main() {
    printRangeWhile();
    return 0;
}
