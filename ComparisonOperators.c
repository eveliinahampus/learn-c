#include <stdio.h>

/*
Write a program that first asks the user whether they drink coffee or tea and then how many cups a day. 
Finally, the program prints a statement in accordance with the following instructions: 
Coffee 0 to 2 cups: "You don't drink a lot of coffee, do you?", coffee 3-20 cups: "You drink a lot of coffee!", 
Tea 0-2 cups: "You do not drink a lot of tea.", tea 3-20 cups: "You drink a lot of tea!", 
Otherwise "An error occurred in the program!" The number of cups shall be processed as an integer variable 
and the drink as a character variable (c/t). You do not need to account for upper case letters.
*/

int main() {
    char coffee_or_tea;
    int cups;

    printf("Do you drink coffee or tea (c/t)? ");
    coffee_or_tea = getchar();
    while (getchar() != '\n'); 

    switch (coffee_or_tea) {
        case 'c': // case coffee
            printf("How many cups do you drink daily: ");
            if (scanf("%d", &cups) != 1 || cups < 1 || cups > 20) {
                printf("An error occurred in the program!\n");
            } else if (cups <= 2) {
                printf("You don't drink a lot of coffee, do you?\n");
            } else {
                printf("You drink a lot of coffee!\n");
            }
            break;

        case 't': // case tea
            printf("How many cups do you drink daily: ");
            if (scanf("%d", &cups) != 1 || cups < 1 || cups > 20) {
                printf("An error occurred in the program!\n");
            } else if (cups <= 2) {
                printf("You do not drink a lot of tea.\n");
            } else {
                printf("You drink a lot of tea!\n");
            }
            break;

        default: 
			printf("How many cups do you drink daily: ");
            if (scanf("%d", &cups) != 1 || cups < 1 || cups > 20) {
            printf("An error occurred in the program!\n");}
            break;
    }

    return 0; 
}