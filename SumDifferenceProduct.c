#include <stdio.h>

/*
Write a program that prompts the user for two integers and prints the sum, 
difference and product of the numbers on the screen.
*/

int main (){
	int first_number, second_number, sum, difference, product;

	printf("Enter the first number: \n");
	scanf("%d", &first_number);

	printf("Enter the second number: \n");
	scanf("%d", &second_number);

	sum = first_number + second_number;
	difference = first_number - second_number;
	product = first_number * second_number;
	
	printf("%d + %d = %d\n", first_number, second_number, sum);
	printf("%d - %d = %d\n", first_number, second_number, difference);
	printf("%d * %d = %d\n", first_number, second_number, product);

	return 0;
}