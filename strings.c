#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
/*
int main()
    {
        char s[100];
        int n,i,j,count;
        scanf("%[^\n]s",s);
        for(i=0;s[i]!='\0';i++)
        {
            n=0;
            if(isdigit(s[i]))
            {
                n=s[i]-'0';
                for(j=j+1;s[j]!='\0';j++)
                {
                    if(isdigit(s[i]))
                    {
                    n=n*10+s[j]-'0';
                    }
                    else
                    {
                        i=j;
                        break;
                    }
                }
                for(i=0;i<sqrt(n);i++)
                {
                    if(n%i==0)
                    count++;
                }
               
            }
            
        }
        if(count==0)
            {
                printf("%d",n);
            }
    return 0;
    }
  

int main()
{
    char s[100];
    int i,l;
    int flag;
    scanf("%[^\n]s",s);

    l=strlen(s);

    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!=s[l-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("Palindrome");
    else
    printf("Not a Palindrome");

return 0;
}
 


int addition(int a,int b)
{
    int c;
    c=a+b;
    return c;
}

int subtraction(int a,int b)
{
    int c;
    c=a-b;
    return c;
}

int multiply(int a,int b)
{
    int c;
    c=a*b;
    return c;
}

float division(int a,int b)
{
    float c;
    c=(float)a/b;
    return c;
}

int main()
{
    int x,y,sum,sub,mul;
    float div;
    scanf("%d%d",&x,&y);
    sum=addition(x,y);
    sub=subtraction(x,y);
    mul=multiply(x,y);
    div=division(x,y);
    printf("SUM:%d\n",sum);
    printf("SUB:%d\n",sub);
    printf("MUL:%d\n",mul);
    printf("DIV:%f",div);
    return 0;
}
   

void evenorodd(int n)
{
    if(n%2==0)
    {
        printf("The give number is even");
    }

    else
    printf("The given number is odd");

}

int main()
{
    int x,output;
    scanf("%d",&x);
    evenorodd(x);
    return 0;
    
}
    

void primenumber(int n)
{
    int count=0,i;
    for(i=0;i<sqrt(n);i++)
    {
       if(n%i==0)
       count++;

    }
    if(count==0)
    printf("The number is prime");
    else
    printf("The number is not prime");
}

int main()
{
    int x;
    scanf("%d",&x);
    primenumber(x);
    return 0;

}


int consonents(char *s1,int n1)
{

int i;
for(i=0;s1[i]!='\0';i++)
{
    while(s1[i]!='a'||s1[i]!='e'||s1[i]!='i'||s1[i]!='o'||s1[i]!='u'||
        s1[i]!='A'|s1[i]!='E'||[i]!='I'||s1[i]!=''||s1[i]!='u'||
}
}





}

int main()
{
    
    int n,consonentNum=0;
    char s[n];
    scanf("%d",&n);
    scanf("[^\n]",s);
    consonentNum=consonents(s,n);
    printf("The number of consonents is:%d",consonentNum);
    return 0;

}


int sumEven(int n)
{
 if (n <= 1)
        return 0;
    
    if (n % 2 == 0)
      return n + sumEven(n - 2); 
    else
       return sumEven(n - 1); 
}

int main()
{
    int n,evensum=0;
    scanf("%d",&n);
    evensum=sumEven(n);
    printf("%d",evensum);
    return 0;
}    

int main()
{
    struct student
    {
        char name[30];
        int x,y,z;
        float average;
    }a;

    printf("Enter the student name:\n");
    scanf("%[^\n]name",a.name);
    printf("Enter the marks in 3 subjects:\n");
    scanf("%d%d%d",&a.x,&a.y,&a.z);
    a.average=(float)(a.x+a.y+a.z)/3;
    printf("The students name:%s",a.name);
    printf("\nThe marks in subject 1:%d",a.x);
    printf("\nThe marks in subject 2:%d",a.y);
    printf("\nThe marks in subject 3:%d",a.z);
    printf("\nThe average marks is:%f",a.average);
    return 0;




} */

int main()
{
    struct employee
    {
        char name[30];
        int id;
        float salary,experience;
        char department[20];
    }a;

    printf("Enter the employee name:\n");
    scanf("%[^\n]name",a.name);
    printf("Enter the employee ID:\n");
    scanf("%d",&a.id);
    printf("Enter the Salary:\n");
    scanf("%f",a.salary);
    printf("Enter the experience:\n");
    scanf("%f",a.experience);
    printf("Enter the department:\n");
    scanf("%[^\n]department",a.department);

    printf("The employees name:%s",a.name);
    printf("The employee id:%d",a.id);
    printf("The salary:%f",a.salary);
    printf("The experience:%f",a.experience);
    printf("The department:%s",a.department);
    return 0;

}
