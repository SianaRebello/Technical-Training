#include<stdio.h>

int main()
{   
    int adultcost=10;
    int childcost=5; 
    int source,destination,childnumber,adultnumber, numberstops;
    float totalcost;
    int roadtax = 100;
    float finalcost;

    printf("Enter the source number: \n");
    scanf("%d",&source);
    printf("Enter the destination number:\n");
    scanf("%d",&destination);
    printf("Enter the number of stops travelling: \n");
    scanf("%d",&numberstops);
    printf("Enter the adult number: \n");
    scanf("%d",&adultnumber);
    printf("Enter the children number: \n");
    scanf("%d",&childnumber);

    totalcost= numberstops*((adultcost*adultnumber)+(childcost*childnumber));
    finalcost = totalcost+5;
     
    printf("Source stage number: %d \n",source);
    printf("Destination stage number:%d \n",destination);
    printf("Number of adults:%d \n",adultnumber);
    printf("Number of children:%d \n",childnumber);
    printf("Ticket cost:%f \n",totalcost);
    printf("Total price:%f \n",finalcost);
    
    return 0; 
    
}