#include <iostream>
using namespace std;

void countOddPos() 
{
    int n, count = 0, pos = 1;
    cin >> n;
    while (n > 0)
     {
        if (pos % 2 != 0)
            count++;
        n=n/10;
        pos++;
    }
    cout << count << endl;
}

int main()
 {
    countOddPos();
    return 0;
}
