#include <stdio.h>

int main(){

    float m1, m2, m3, m4, m5;
    float total, percentage;
    
    printf("enter marks for 5 subjects (0-100):\n");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
    total = m1+m2+m3+m4+m5;
    percentage = (total/500)*100;
    printf("Percentage = %.2f%%\n", percentage);

     if (percentage >= 85) {
        printf("Full Scholarship\n");
    }
    else if (percentage >= 70) {
        printf("Partial Scholarship\n");
    }
    else if (percentage >= 50) {
        printf("Eligible for Consideration\n");
    }
    else {
        printf("Not Eligible\n");
    }

    return 0;
} 
