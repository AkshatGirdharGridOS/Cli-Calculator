#include <stdio.h>
#include "calc_functions.h"
#include "calc_ui.h"
#include "input_validation.h"

int main()
{
    char again = 'Y';
    do
    {

        double num1, num2, result;
        int choice; // for the user to choose which operation

        displayMenu();
        choice = getOperationsChoice();

        if (choice == -1)
        {
            continue;
        }

        getNumbers(&num1, &num2, choice);

        // switch statements to let the user choose an operation
        switch (choice)
        {
        case 1:
            addNumbers(num1, num2);
            break;
        case 2:
            subtractNumbers(num1, num2);
            break;
        case 3:
            multiplyNumbers(num1, num2);
            break;
        case 4:
            divideNumbers(num1, num2);
            break;
        case 5:
            squareRoot(num1);
            break;
        case 6:
            exponentials(num1, num2);
            break;
        case 7:
            modulus((int)num1, (int)num2);
            break;
        default:
            printf("Invalid choice! Please select a valid operation!");
            break;
        }

        again = askToContinue();
    } while (again == 'Y' || again == 'y');
}