#include <iostream>
using namespace std;

void countSumDigits() 
{
    int n, count = 0, sum = 0;
    cin >> n;
    while (n > 0) {
        int d = n % 10;
        if (d % 2 == 0 || d % 3 == 0)
         {
            count++;
            sum =sum+d;
        }
        n =n/10;
    }
    cout << count << " " << sum << endl;
}

int main()
 {
    countSumDigits();
    return 0;
}
