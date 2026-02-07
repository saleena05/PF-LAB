#include <stdio.h>

int main(){
    int i;
    int f;
    char c;
    printf("enter an integer:");
    scanf("%d", &i);
    printf("enter a float:");
    scanf("%f", &f);
    printf("enter a charachter:");
    scanf("%c", &c);

    printf("\nYou entered:\n");
    printf("Integer: %d\n", i);
    printf("Float: %f\n", f);
    printf("Character: %c\n", c);

    return 0; 
}