#include<stdio.h>
/*
int main()
{
    int a,b,temp;
    printf("Enter the first integer: \n");
    scanf("%d",&a);
    printf("Enter the second variable:\n");
    scanf("%d",&b);
    printf("Before swapping the numbers are:%d and %d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("The swapped numbers:%d and %d",a,b);
    return 0;
}
*/
int main()
{
    int a,b;
    printf("Enter the first integer: \n");
    scanf("%d",&a);
    printf("Enter the second variable:\n");
    scanf("%d",&b);
    printf("Before swapping the numbers are:%d and %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The swapped numbers:%d and %d",a,b);
    return 0;
}

