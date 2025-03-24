#include <stdio.h>
#include "calc_ui.h"
#include "input_validation.h"

void displayMenu(void)
{
    printf("-----Calculator-----\n");
    printf("1.Add\n");
    printf("2. Subtract\n");
    printf("3.Multiply\n");
    printf("4.Divide\n");
    printf("5. Square Root\n");
    printf("6. Exponentials\n");
    printf("7. Modulus\n");
}

void clearInputBuffer(void)
{
    int c;
    while (
        (c = getchar()) != '\n' && c != EOF)
        ;
}

int getOperationsChoice(void)
{
    int choice;
    printf("Enter the operation to perform : ");

    if (!validateIntegerInput(&choice) || choice < 1 || choice > 7)
    {
        printf("Invalid operation, choose only from 1, 2, 3, 4, 5, 6, 7\n");
        clearInputBuffer();
        return -1; // skip the rest of the loop and prompt the user again
    }
    return choice;
}

void getNumbers(double *num1, double *num2, int choice)
{
    // take 2 numbers as input from the user
    if (choice != 5)
    {
        printf("Enter the first number: ");
        validateDoubleInput(num1);
        printf("Enter the second number : ");
        validateDoubleInput(num2);
    }
    else
    {
        printf("Enter a number to find it's square root : ");
        validateDoubleInput(num1);
        *num2 = 0; // not used for sqaure root
    }
}

char askToContinue(void)
{
    char again;
    printf("Do you want to perform another calcualtion? (Y/N) : ");
    scanf(" %c", &again);
    clearInputBuffer(); 
    return again;
}