#include <iostream>
using namespace std;

void Present() 
{
    int n, flag = 0;
    cin >> n;
    while (n > 0) 
    {
        if (n % 10 == 7) {
            flag = 1;
            break;
        }
        n =n/10;
    }
    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
 {
    Present();
    return 0;
}
