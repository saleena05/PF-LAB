#include <stdio.h>
int main(){
    float data;

    printf("enter total GBused: ");
    scanf("%f", &data);

    if(data<=50){
        printf("basic user\n");
    }
    else if(data>50&&data<150){
        printf("standard user\n");
    }
    else{
        printf("heavy user");
    }
    return 0;
