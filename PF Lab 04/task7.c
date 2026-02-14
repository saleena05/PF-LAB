#include <stdio.h>

int main(){

    float amount, discount, finalAmount; 
    
    printf("enter total purchase amount:");
    scanf("%f", &amount);

    if (amount >= 5000) {
        discount = amount * 0.20;
    }
    else if (amount >= 3000) {
        discount = amount * 0.10;
    }
    else {
        discount = 0;
    }

    finalAmount = amount - discount;

    printf("Discount = %.2f\n", discount);
    printf("Final Amount = %.2f\n", finalAmount);

    return 0;
} 
