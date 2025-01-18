#include <stdio.h>

/*
Write a program that prompts the user for an amount in Finnish markka and converts it to euro. 
Finally, the program prints the amount on the screen in euro with two decimal places of precision. 
The euro conversion factor is 5.94573.
*/

int main (){
	float markka, euro, conversion;

	markka = 0;
	conversion = 5.94573;
	
	printf("Enter an amount in FIM: ");
	scanf("%f", &markka);

	euro = markka / conversion;

	printf("FIM converted to euro: %.2f", euro);

	return 0;
		   
}