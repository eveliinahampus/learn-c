#include <stdio.h>

/*
Write a program that prompts the user for an integer and checks whether it is even or odd. 
If the number is even, print "Number 2 is even.", if it is odd, print "Number 1 is odd.".*/

int main (){
	int integer, even_or_odd;

	printf("Enter an integer: ");
	scanf("%d", &integer);

	even_or_odd = integer % 2;
	
	if (even_or_odd == 0){
		printf("Number %d is even.", integer);
	}
	else if (even_or_odd == 1){
		printf("Number %d is odd.", integer);
	}
	else {
		printf("Error.");
	}
    	
	return 0;
}