#include <iostream>
using namespace std;

void reverse() {
    int n, sum=0,r;
    cin >> n;
    while (n > 0) {
        r=r%10;
        sum=sum*10+r;
        n=n/10;
    }
    cout << sum << endl;
}

int main() {
    reverse();
    return 0;
}
