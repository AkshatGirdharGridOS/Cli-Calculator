#include <stdio.h>
#include <stdlib.h>

// function to validate integer input
int validateIntegerInput(int *input) {
    char buffer[100];
    while (1) {
        if (fgets(buffer,sizeof(buffer),stdin) == NULL) {
            printf("Error reading input,Please try again!\n");
            continue;
        }
        if (sscanf(buffer,"%d",input) == 1) {
            return 1; // means valid integer has been enetered
        } else {
            printf("Invalid Input, please enter a vlaid integer\n");
        }
    }
}

// Function to validate double input
int validateDoubleInput(double *input) {
    char buffer[100];
    while (1) {
        if (fgets(buffer,sizeof(buffer),stdin) == NULL) {
            printf("Error reading the input,please try again!\n");
            continue;
        }
        if (sscanf(buffer,"%lf",input) == 1) {
            return 1;
        } else {
            printf("Invalid Input. Please enter a valid number.\n");
        }
    }
}