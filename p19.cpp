#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void randomDigit() {
    srand(time(0));
    int n = rand() % 9000 + 1000;
    cout << n << endl;
}

int main() {
    randomDigit();
    return 0;
}
