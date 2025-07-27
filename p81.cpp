#include <iostream>
using namespace std;

void notPrime()
 {
    int n, count = 0;
    cin >> n;
    while (n > 0) 
    {
        int d = n % 10;
        if (!(d == 2 || d == 3 || d == 5 || d == 7))
            count++;
        n =n/10;
    }
    cout << count << endl;
}

int main()
 {
    notPrime();
    return 0;
}
