#include <stdio.h>
#include <math.h>

int main(){

    int choice;
    float num1, num2, result; 
    int a, b;
    printf("------ Math Operations Console ------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square of a number\n");
    printf("6. Cube of a number\n");
    printf("7. Square Root of a number\n");
    printf("8. Power (x^y)\n");
    printf("9. Absolute Value\n");
    printf("10. Modulus (Remainder of two numbers)\n");
    
    printf("enter your choice:");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);
        result = num1 + num2;
        printf("Result = %.2f\n", result);
        break;
    
    case 2:
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);
        result = num1 - num2;
        printf("Result = %.2f\n", result);
        break;

     case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result = %.2f\n", result);
            } else {
                printf("Division by zero is not allowed.\n");
            }
            break;
        
         case 5:
            printf("Enter a number: ");
            scanf("%f", &num1);
            result = num1 * num1;
            printf("Result = %.2f\n", result);
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%f", &num1);
            result = num1 * num1 * num1;
            printf("Result = %.2f\n", result);
            break;

        case 7:
            printf("Enter a number: ");
            scanf("%f", &num1);
            if (num1 >= 0) {
                result = sqrt(num1);
                printf("Result = %.2f\n", result);
            } else {
                printf("Square root of negative number is not allowed.\n");
            }
            break;

        case 8:
            printf("Enter base and exponent: ");
            scanf("%f %f", &num1, &num2);
            result = pow(num1, num2);
            printf("Result = %.2f\n", result);
            break;

        case 9:
            printf("Enter a number: ");
            scanf("%f", &num1);
            result = fabs(num1);
            printf("Result = %.2f\n", result);
            break;

        case 10:
            printf("Enter two integers: ");
            scanf("%d %d", &a, &b);
            if (b != 0) {
                printf("Result = %d\n", a % b);
            } else {
                printf("Modulus by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid choice!\n");
    }

   
    return 0;
} 
