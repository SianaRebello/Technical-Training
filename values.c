#include<stdio.h>

int main()
{
    float a = 5.2;
    double b = 5.2;
    char c = 'S';
    printf("%.1f\n",a);
    printf("%f\n",b);
    printf("%c\n",c);
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(b));
    printf("%d\n",sizeof(c));


    return 0;

}