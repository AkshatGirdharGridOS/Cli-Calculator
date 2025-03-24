#ifndef CALC_UI_H
#define CALC_UI_H

// function declarations for the user interface to be used in calculator
void displayMenu(void);
int getOperationsChoice(void);
// Pointers are used for num1 and num2 to allow getNumbers to modify their values
void getNumbers(double *num1, double *num2, int choice);
char askToContinue(void);

#endif
