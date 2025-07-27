#include <iostream>
#include <cmath>
using namespace std;

void isArmstrong() {
    int n, d=0,sum=0,r,x,y;
    cin >> n;
    x=n;
    y=n;
    while (n > 0) {
        d++;
        n =n/10;
    }
    while(x>0)
    {
        r=x%10;
        sum=sum+pow(r,d);
        x=x/10;
    }
    if(y==sum)
    {
        cout<<"Armstrong"<<endl;
    }
    else
        cout<<" Not Armstrong"<<endl;
}

int main() {
    isArmstrong();
    return 0;
}
