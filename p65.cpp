#include <iostream>
using namespace std;

void count()
 {
    int n, count = 0;
    cin >> n;
    while (n > 0)
     {
        if (n % 10 == 7)
            count++;
        n =n/10;
    }
    cout << count << endl;
}

int main()
 {
    count();
    return 0;
}
