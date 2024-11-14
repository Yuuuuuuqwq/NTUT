#include<stdio.h>
#include<stdlib.h>

int main()
{
    float number,balance,charges,credits,limits,new;
    while(1)
    {
        printf("Enter account number (-1 to end): ");
        scanf("%f",&number);

        if(number== -1)
            break;

        printf("Enter beginning balance: ");
        scanf("%f",&balance);

        printf("Enter total charges: ");
        scanf("%f",&charges);
        
        printf("Enter total credits: ");
        scanf("%f",&credits);

        printf("Enter credit limits: ");
        scanf("%f",&limits);

        new = balance+credits;

        if(new>limits)
        {
            printf("Account:\t%.f",number);
            printf("\nCredit limits:\t%.2f ",limits);
            printf("\nBalance:\t%.2f",new);
            printf("\nCredit Limits Exceeded");
        }
    }

    system("pause");
    return 0;
}