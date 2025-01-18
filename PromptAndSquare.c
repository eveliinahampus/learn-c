#include <stdio.h>

/*
Write a program that prompts the user for an integer, 
calculates the square and prints the result on the screen 
(also print out a newline character \n after the result). 
After printing, the program closes itself.
*/

int main(){

	int number, square;
	
	printf("Enter an integer: ");
	scanf("%d", &number);

	square = number * number;

	printf("The square of the number you entered is %d\n", square);

	return 0;
}