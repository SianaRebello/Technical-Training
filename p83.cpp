#include <iostream>
using namespace std;

void countSumNotPrime()
 {
    int n, count = 0, sum = 0;
    cin >> n;
    while (n > 0) 
    {
        int d = n % 10;
        if (!(d == 2 || d == 3 || d == 5 || d == 7))
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
    countSumNotPrime();
    return 0;
}
