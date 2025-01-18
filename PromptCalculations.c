#include <stdio.h>

/*
Write a simple calculator program that calculates the difference, 
sum or product of two numbers. First, the program asks which calculation to perform. 
After this, the program prompts for the numbers, performs the calculation and prints the result. 
The selection within the program has to be done using a switch() statement.
*/

int main() {
    int first_number, second_number, result, calc_function;

    // select function
    printf("1: subtraction\n2: addition\n3: multiplication\n");
    printf("Select function: ");
    scanf("%d", &calc_function);  

    // user input for numbers
    printf("Enter the first number: ");
    scanf("%d", &first_number);

    printf("Enter the second number: ");
    scanf("%d", &second_number);

    // calculation cases
    switch (calc_function) {
        case 1:  // subtraction
            result = first_number - second_number;
            printf("%d - %d = %d\n", first_number, second_number, result);
            break;

        case 2:  // addition
            result = first_number + second_number;
            printf("%d + %d = %d\n", first_number, second_number, result);
            break;

        case 3:  // multiplication
            result = first_number * second_number;
            printf("%d * %d = %d\n", first_number, second_number, result);
            break;

        default:  // default error
            printf("Error.\n");
            break;
    }

    return 0;
}