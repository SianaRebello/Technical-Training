#include<stdio.h>
#include<math.h>
/*

int main()
{   
    int a;
    float squareroot;
    printf("Enter the positive number whose square root u have to find: \n");
    scanf("%d",&a);
    squareroot=(float)sqrt(a);
    printf("The squareroot of given number :%f",squareroot);

    return 0;

}
    

int main()
{
    int x,y;
    float z;
    printf("Enter the value for x: \n");
    scanf("%d",&x);
    printf("Enter the value for y: \n");
    scanf("%d",&y);

    z= sqrt(x)+pow(x,y);

    printf("The output is:%f",z);

}
    

int main()
{
    int x,y;
    float z;
    printf("Enter the value for x: \n");
    scanf("%d",&x);
    printf("Enter the value for y: \n");
    scanf("%d",&y);

    z= (float)(log(x)+log10(x)+exp(x))/sqrt(y);
    printf("The output is:%f",z);
    
    return 0;

}



int main()
{
    int a= 278,b=353;
    printf("%d",a&b);
    printf("\n%d",a|b);
    printf("\n%d",a^b);
    printf("\n%d",a<<2);
    printf("\n%d",a>>2);
    return 0;
    
}
    

int main()
{
    int a;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
 (a & 1) == 0? printf("The number is even"):printf("The number is odd");
    return 0;

}
*

int main()
{
    int n;
    printf("Enter the number: \n");
    scanf("%d",&n);
    if(n>0)
    {
        printf("The number entered is positive\n");
        printf("The number entered is = %d",n);

    }
    return 0;
}
    
int main()
{
    int n;
    printf("Enter the number: \n");
    scanf("%d",&n);
    if(n>0)
    {
        printf("The number entered is positive\n");
        printf("The number entered is = %d",n);

    }

    else{
        printf("The number entered is negative\n");
         printf("The number entered is = %d",n);
    }
    return 0;
}

int main()
{
    char a;
    printf("Enter the character :\n");
    scanf("%c",&a);

    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
    {
        printf("The entered character is vowel");

    }

    else{
        printf("The entered character is not vowel");
    }
    return 0;
}


int main()
{
    int m,p,c, total;
    float avg;
    printf("Enter the marks for sunjects m p c \n");
    scanf("%d%d%d",&m,&p,&c);

    if(m>35)
    {
        if(p>35)
        {
            if(c>35)
            {
                total=m+p+c;
                avg=(float)total/3;
                printf("Result=Pass\n");
                printf("Total marks=%d\n",total);
                printf("Average marks =%f",avg);


            }
            else 
            printf("The student failed in subject c");


       
            
        }
        else 
        printf("The student failed in subject p");
    }
    else
    printf("The student failed in subject m");

    return 0;
}
    

int main()
{
    int m,p,c,total;
    float avg;

    printf("Enter the marks obtained in subject m,c,p\n");
    scanf("%d%d%d",&m,&p,&c);
    total= m+p+c;
    avg=(float)total/3;

    if(avg>90)
    {
        printf("The grade is A+");
    }
    else if(avg>80)
    {
          printf("The grade is A");
    }
    else if(avg>70)
    {
          printf("The grade is B+");
    }
    else if(avg>60)
    {
          printf("The grade is B");
    }
    else if(avg>50)
    {
          printf("The grade is C");
    }
    else if(avg>40)
    {
          printf("The grade is D");
    }
    else if(avg>35)
    {
          printf("The grade is E");
    
    }

    else
    printf("The grade is F");

    return 0;

}
    
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



int main()
{
    int a,b,n;
    float x;
    
    printf("Select any one from the following options:\n");
    printf("1.Square Area\n 2. Rectangle Area \n 3. Circle Area\n 4.Triangle Area");
    printf("Enter your option:\n");
    scanf("%d",&n);

    switch(n)
    {
        case 1:
        printf("Enter the value for a :\n");
        scanf("%d",&a);
        x=a*a;
        printf("The area of square is :%f",x);
        break;

        case 2:
        printf("Enter the value for a and b:\n");
        scanf("%d%d",&a,&b);
        x=a*b;
        printf("The area for rectangle is :%f\n",x);
        break;

       case 3:
       printf("Enter the value for a:\n");
       scanf("%d",&a);
       x= 3.142*a*a;
       printf("The area for circle is :%f\n",x);
       break;

       case 4:
       printf("Enter the value for a and b:\n");
       scanf("%d%d",&a,&b);
       x=(float)(a*b)/2;
       printf("The area for triangle is :%f\n",x);
       break;

       default:
       printf("Invalid option");

       
    }
    return 0;
}
    */

int main()
{
    int balance,pin,option,totalamount,currantamount=1000,newpin,againnewpin;
     
    printf("Choose any one from the following options:\n");
    printf("1. Deposit\n 2.Withdraw \n 3.Balance Enquiry \n 4. Pin change\n");
    scanf("%d",&option);

    switch(option)
    {
        case 1:
        printf("Enter the amount to deposit:\n");
        scanf("%d",&balance);
        printf("Enter the pin:\n");
        scanf("%d",&pin);
        if(pin==1234)
        {
            totalamount=currantamount+balance;
            printf("The total amount after depositing is:%d",totalamount);
        }
        else
        printf("Incorrect pin number");

        break;

        case 2:
        printf("Enter the amount to withdraw:\n");
        scanf("%d",&balance);
        printf("Enter the pin:\n");
        scanf("%d",&pin);
        if(pin==1234)
        {
            if(balance<currantamount)
            {
                totalamount=currantamount-balance;
                printf("The balance remaining after withdrawal is:%d",totalamount);
            }
            else
            printf("Insufficiant amount");
        }
            else
            printf("The pin entered is incorrect");
            break;

            case 3:
            printf("Enter the pin number:\n");
            scanf("%d",&pin);
            if(pin==1234)
            {
                printf("The current balance is:%d",currantamount);
            }
            else
            printf("The entered pin is wrong");

            break;

            case 4:
            printf("Enter the currant pin:\n");
            scanf("%d",&pin);
            printf("Enter the new pin:\n");
            scanf("%d",&newpin);
            printf("Enter the new pin again:\n");
            scanf("%d",&againnewpin);
            if(pin==1234)
            {
                printf("The pinentered is wrong");
            

            if(newpin==againnewpin)
            {
                pin=againnewpin;
                printf("The new pin is updated\n");
        
            }
            else
            printf("The pin again entered is incorrect");
        }
        else 
           printf("The pin entered is wrong");

           default:
           printf("Invalid option entered");
    }
    return 0;
}