#include <stdio.h>

/* 
Write a program that prompts the user for an integer n (n>0) and 
prints the factorial of the number on the screen. For example, 
the factorial of n is designated n!, which means the number calculated as follows: 1*2*3...*n
*/

int main() {
    int n, i;
    int factorial = 1;
    
    printf("Enter an integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("The factorial of %d is %d\n", n, factorial);

    return 0;
}