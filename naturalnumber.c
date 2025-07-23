#include<stdio.h>
#include<math.h>
#include<limits.h>
#include<stdlib.h>

/*
int main()
{
    int  s,e ;
    scanf("%d%d",&s,&e);
    while(s<=e)
    {
        printf("%d\t",e);
        e--;
    }
    return 0;
   


}
    

int main()
{
    int a,e,sum=0;
    scanf("%d%d",&a,&e);
    while(s%2==0)
    {
        sum =sum+s;
        s++;
    }
    printf("%d",sum);
    return 0;
}
    

    int main()
    {
        int a,output=0,i=0;
        printf("Enter the input number:\n");
        scanf("%d",&a);
        while( i=len(a))
        {
          output=output+a[i];
          i++;
        }
        printf("The sum")
    
    }
        
    int main()
    {
        int n,sum=0,r;
        scanf("%d",&n);
        while(n>0)
        {
            r=n%10;
            sum=sum*10+r;//(sum=sum*10+r)
            n=n/10;
        }
        printf("%d",sum);
        return 0;
    }
        

        int main()
    {
        int n,sum=0,r,x;
        scanf("%d",&n);
        x=n;
        while(n>0)
        {
            r=n%10;
            sum=sum*10+r;//(sum=sum*10+r)
            n=n/10;
        }
        printf("%d",sum);
        if (sum==x)
        {
            printf("The given number is a palindrome");
        }
        else
            printf("The given number is not a palindrome");
        return 0;
    }
        
    
    int main()
    {
        int n,i,count=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            count++;
        }

        if (count==2)
        printf()
    }
3
    

int main()
{
    int n ,d=0,sum=0,r,x,y;
    scanf("%d",&n);
    x=n;
    y=n;
    while(n>0)
    {
        d++;
        n=n/10;

    }
    while(x>0)
    {
        r=x%10;
        sum=sum+pow(r,d);
        x=x/10;
    }
    if(y==sum)
     printf("Armstrong");
    else
    printf("Not armstrong");

    return 0;
}
    
   int main()
   {
    int n ,sum=0,r;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("The sum is:%d",sum);
    if(n/sum==0)
    {
        printf("\nThe number given is Navie number");

    }
    else 
    printf("The number is not Navie number");

    return 0;
   }
    

    int main()
    {
        int n,l=0,s,r,sum;
        
        printf("Enter the number:");
        scanf("%d",&n);
        while(n>0)
        {
            r= n % 10;
            if(l<r)
            {
             l=r;
             printf("The largest digit in the number is:%d",l);

            }
            s=l;
            if(s>r)
            {
              s=r;
              printf("The smallest number in the number is:%d",s);
            }
            n=n/10;
            
            sum=l+r;
            printf("The sum is :%d",sum);
            

        }
        return 0;
    }
        
    
int main()
{
    printf("Hi\n");
    A:printf("Hello\n");
    printf("Welcome\n");
    printf("to\n");
    goto A;
    printf("C language");

    return 0;
}
    

int main()
{
    int n,i,j,k,;
    char c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c='A';
        for(j=1;j<=i;j++)
        {
            printf("%c\t",c);
            c++;
        }

        printf("\n");
    }
    return 0;

}
    
int main()
{
    int n,i,j,temp,x,y,product;
    scanf("%d",&n);
    int a[n];
    int k;
    scanf("%d",&k);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
     x=a[k-1];
    y=a[n-k];

    product=x*y;

    printf("\nThe product is:%d",product);

   
    return 0;
 }

#include<stdlib.h>
int main()
{
    int n,x,i,j,l=INT_MIN,s=INT_MAX,count,c,diff,mindiff=100,z=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    scanf("%d",&x);
    for(i=0;i<n;i++)//loop to find th largest and smallest number in the array
    {
        if(l<a[i])
        {
        l=a[i];
        }
   
        if(s>a[i])
        {
        s=a[i];
        }
    }

     while(s<l)/
    {  /loop to find nearest prime from array
     count=0;
     for(j=2;j<=sqrt(s);j++)
     {
        if(s%j==0)
        count++;
     }
     if(count==0)
     {
        for(i=0;i<n;i++)
        if(s==a[i])
        {
            diff=abs(a[i]-x);
            if(diff<mindiff)
            {
            z=a[i];
           }
        }
      }
    }

   s++;
}
printf("\n%d",z);
return 0;
}

int main()
{
    int n,i,r,x,z=0,s=9;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
   for(i=0;i<n;i++)
    { 
      x=a[i];
      while(x>0){
      r=x%10;
      if(r<s)
     {
     s=r;
     z=a[i];
     }
  x=x/10;
   }
  }
printf("%d",z);
return 0;
}


int main()
{
    int n,i,j,k,l=INT_MIN,s=INT_MAX,count,c,flag=0,isnotprime=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i,n;i++)
    {
         scanf("%d",&a[i]);
    }
          for(i=0;i,n;i++)
          {
            count=0;
            for(k=2;k<sqrt(a[i]);k++)
            {
                if(a[i]%k==0)
                count++;
            }
            if(count==0)
            {
                flag=1;
                if(l<a[i])
                {
                    l=a[i];
                }
                if(s>a[i])
                {
                    s=a[i];
                }
            }
          }
        if(flag==0 || l==s)
        printf("\n Prime Array");
        while(s<=1)
        {
            count=0;
            for(j=2;j<=sqrt(s);j++)
            {
                if(s%j==0)
                count++;
            }
            if(count==0)
            {
                c=0;
                for(i=0;i<n;i++)
                {
                    if(s==a[i])
                    c++;
                }
                if(c==0)
                {
                    isnotprime=1;
                    break;
                }
                }
                s++;
            }
            if(isnotprime==0)
            printf("\n Prime Array");
            else
            printf("\nNot a Prime Array");
            return 0;
        }
    

int main()
{
    int n,m,i,j,a,b;
    scanf("%d",&n)
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    scanf("%d",&m)
    int b[m];
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]); 
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            printf("%d",a[i]);
        }
    }
    return 0;
}

int main()
{
    int n,m,q;
    scanf("%d",&n);
    
    m = (int) sqrt(n);
    q=m*m;
    if(q==n)
    {
        printf("Perfect Square");
    }
    else
    printf("Not perfect square");

    return 0;

}
    

int main()
{
    int n,i,count=0,count1=0,sum=0,r;
    scanf("%d",&n);
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            count++;

        }
        if(count==0)
        {
            
            while(n>0)
            {
                r=n%10;
                sum=sum+r;
                n=n/10;
                for(i=2;i<=sqrt(sum);i++)
                {
                   if(sum%i==0)
                    {
                        count1++;

                     }
                      if(count1==0)
                        {
                         printf("\nThe given number is prime");
                         while(n>0)
                         {
                            r=n%10;
                            if(r==2||r==3||r==5||r==7)
                            {
                            printf("The number is prime");
                            }
                         }

                        }
                        else
                        printf("The given number is not prime");

                 }     
                }


        }
    }
    return 0;

}
    
   int main()
   {
    int n,i,j,flag1,flag2;
    printf("Enter the n :\n");
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
          scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                if(a[i][j]!=1)
                flag1=1;
            }
            else
            {  
                 if(a[i][j]!=0)
                 flag2=1;


            }
            
        }
           
              
    }
   if(flag1==0 & flag2==0)
   prrintf("Diagonal matrix");
   else
   printf("Not a diagonal matrix");
    return 0;
   }
    */
int main()
{
    int r,c,i,j;
    scanf("%d",&r);
    scanf("%d",&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int b[c][r];
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {  
            b[i][j]=a[j][i];
           
            printf("%d\t",b[i][j]);
        }
        printf("\n");
         
    }

    if(a[i][j]==b[i][j])
    {
        printf("The matrix is symmetric");

    }
    else
    printf("The matrix is not symmetric");

return 0;
    
}