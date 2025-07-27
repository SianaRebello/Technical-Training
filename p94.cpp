#include <iostream>
using namespace std;

void checkArmstrong()
 {
    int n, sum = 0, temp;
    cin >> n;
    temp = n;
    while (n > 0) 
    {
        int d = n % 10;
        sum =sum+( d * d * d);
        n =n/10;
    }
    if (sum == temp)
        cout << "Armstrong" << endl;
    else
        cout << "Not Armstrong" << endl;
}

int main() 
{
    checkArmstrong();
    return 0;
}
