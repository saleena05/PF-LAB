#include <stdio.h>
int main(){
   
    int  num;
    float balance=1000, amount;

    printf("enter 1 for balance inquiry\n");
    printf("enter 2 to withdraw money\n");
    printf("enter 3 to deposit money\n");
    printf("enter 4 to exit\n");
    
    scanf("%d", &num);

    switch(num)
    {
        case 1:
        printf("your total amount is: %.2f", balance);
        break;

        case 2:
        printf("enter amount");
        scanf("%f", &amount);
        balance = balance - amount;
        printf("balance is: %.2f", balance);
        break;

        case 3:
        printf("enter amount");
        scanf("%f", &amount);
        balance= balance + amount;
        break;

        case 4:
        break;

        default:
        printf("invalid choice\n");

    }

    return 0;
}
