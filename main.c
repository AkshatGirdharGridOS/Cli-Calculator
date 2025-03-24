#include <stdio.h>
#include "calc_functions.h"
#include "calc_ui.h"
#include "input_validation.h"
#include "calc_history.h"

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
            result = addNumbers(num1, num2);
            saveToHistory(num1,num2,result,'+');
            break;
        case 2:
            result = subtractNumbers(num1, num2);
            saveToHistory(num1,num2,result,'-');
            break;
        case 3:
            result = multiplyNumbers(num1, num2);
            saveToHistory(num1,num2,result,'x');
            break;
        case 4:
            result = divideNumbers(num1, num2);
            saveToHistory(num1,num2,result,'/');
            break;
        case 5:
            result = squareRoot(num1);
            saveToHistory(num1,0,result,'R');
            break;
        case 6:
            result = exponentials(num1, num2);
            saveToHistory(num1,num2,result,'^');
            break;
        case 7:
            result = modulus((int)num1, (int)num2);
            saveToHistory(num1,num2,result,'%');
            break;
        case 8 : 
            displayHistory();
            break;
        case 9 :
            clearHistory();
            break;
        default:
            printf("Invalid choice! Please select a valid operation!");
            break;
        }

        again = askToContinue();
    } while (again == 'Y' || again == 'y');
}