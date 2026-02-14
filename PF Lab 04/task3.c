#include <stdio.h>
int main(){
    int balance;

    printf("enter account balance: ");
    scanf("%d", &balance);

    if(balance>0){
        printf("Positive Balance\n");
    }
    else if(balance<0){
        printf("Ovedrawn\n");
    }
    else{
        printf("Zero Balance");
    }
    return 0;
}
