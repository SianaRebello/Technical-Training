#include<stdio.h>
#include<math.h>
//program to understand break 

int main()
{
    int n;
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("Monday");
        break;

        case 2:
        printf("Tuesday");
        break;
        
         case 3:
        printf("Wednesday");
        break;

         case 4:
        printf("Thursday");
        break;

         case 5:
        printf("Friday");
        break;

         case 6:
        printf("Saturday");
        break;

         case 7:
        printf("Sunday");
        break;

        


    }
}

//Program to perform add,sub,mul,div

int main()
{
    int a,b,n;
    float c;

    printf("Choose from the given options:\n");
    printf("1.Add\n 2.Sub\n 3.Mul\n 4.Div\n");
    printf("Enter your option");
    scanf("%d",&n);

    switch(n)
    {
        case 1:
        printf("Enter two numbers:\n");
        scanf("%d%d",&a,&b);
        c=a+b;
        printf("Add=%f",c);
        break;

        case 2:
        printf("Enter two numbers:\n");
        scanf("%d%d",&a,&b);
        c=a-b;
        printf("Sub=%f",c);
        break;

        case 3:
        printf("Enter two numbers:\n");
        scanf("%d%d",&a,&b);
        c=a*b;
        printf("Mul=%f",c);
        break;

        case 4:
        printf("Enter two numbers:\n");
        scanf("%d%d",&a,&b);
        c=(float)a/b;
        printf("Div=%f",c);
        break;

        default:
        printf("Invalid option");
        break;


    }
    return 0;

}
