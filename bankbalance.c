include<stdio.h>
#include

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
