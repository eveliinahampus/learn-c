#include <stdio.h>

/* 
Write a program that first asks the user for an integer and after that, 
a floating-point number. Finally, the program prints both numbers on the screen. 
The floating-point number shall be printed with two decimal places of precision.
*/

int main (){
	int integer_number = 0;
	float decimal_number = 0;

	printf("Enter an integer: \n");
	scanf("%d", &integer_number);

	printf("Enter a decimal number:  \n");
	scanf("%f", &decimal_number);

	printf("You entered the integer: %d\n", integer_number);
	printf("You entered the decimal number, rounded to two decimal places: %.2f\n", decimal_number);	

	return 0;
	
	
}