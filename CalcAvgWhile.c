#include <stdio.h>

/*
Write a program that asks for the students' exam scores (using integers 4 to 10) 
and calculates the average. The program must accept scores until entry is 
terminated by a negative integer. Finally, the program prints out the number of 
scores and the calculated average with two decimal places of precision.
*/

int main() {
    int score;
    int count = 0; 
    int sum = 0;  
	
    printf("The program calculates the average of scores you enter.\n");
    printf("End with a negative integer.\n");

    // loop to take input until a negative number
    while (1) {
        printf("Enter score (4-10):");
        scanf("%d", &score);

        if (score < 0) {
            break; // negative number
        }

        if (score >= 4 && score <= 10) {
            count++;       
            sum += score;  
        } else {
            printf("Invalid score.\n");
        }
    }

    // no scores were entered -case
    if (count == 0) {
        printf("No valid scores.\n");
    } else {
        // Calculate the average
        double average = (double)sum / count;

        // results
        printf("You entered %d scores.\n", count);
        printf("Average score: %.2f\n", average);
    }

    return 0;
}