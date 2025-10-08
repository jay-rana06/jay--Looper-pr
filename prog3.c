#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, sum;

    printf("Enter a number: ");
    scanf("%d", &num);
 
    lastDigit = num % 10;
   
    while (num >= 10) {
        num = num / 10;
    }
    firstDigit = num;
  
    sum = firstDigit + lastDigit;

    printf("First digit = %d\n", firstDigit);
    printf("Last digit  = %d\n", lastDigit);
    printf("Sum = %d\n", sum);

    return 0;
}