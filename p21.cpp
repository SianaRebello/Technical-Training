//Mathematical function

using namespace std;
#include<iostream>
#include<math.h>
float mathfunc(int x, int y)
{ 
    float s;
    s=(float)(log10(exp(x))+log(sqrt(y)))/(sin(x)+exp(y)+pow(x,y));
    return s;

}

int main()
{
    int a,b;
    float output;
    cout<<"Enter the values for a and b"<<endl;
    cin>>a>>b;
    output=mathfunc(a,b);
    cout<<"The output is = "<<endl;
    cout<<output;
    return 0;
}