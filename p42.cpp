#include <iostream>
using namespace std;

void printRangeFor() {
    int start, end;
    cin >> start >> end;
    for (int i = start; i <= end; i++) {
        cout << i << endl;
    }
}

int main() {
    printRangeFor();
    return 0;
}
