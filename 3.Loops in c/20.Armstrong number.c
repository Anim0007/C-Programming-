#include <stdio.h>
int main() {
    int num,temp, remainder, sum = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    temp = num;

    while (num != 0) {

        remainder = num % 10;

       sum += remainder * remainder * remainder;


       num /= 10;
    }

    if (sum == temp)
        printf("%d is an Armstrong number.", temp);
    else
        printf("%d is not an Armstrong number.", temp);

    return 0;
}
