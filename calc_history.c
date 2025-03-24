#include <stdio.h>
#include <stdlib.h>
#include "calc_history.h"

#define HISTORY_FILE "calculation_history.txt"

// save all the calculations in a file as history
void saveToHistory(double num1,double num2, double result,char op) {
    FILE *file = fopen(HISTORY_FILE,"a"); // open in append mode
    if (file == NULL) {
        printf("Error opening the file for writing\n");
        return;
    }
    fprintf(file,"%.2lf %c %.2lf = %.2lf\n",num1,op,num2,result);
    fclose(file);
}

// display the calculation history
void displayHistory(void) {
    FILE *file = fopen(HISTORY_FILE,"r"); // opening the file in read mode
    if (file == NULL) {
        printf("No history found. Perform some calculations first.\n");
        return;
    }

    char line[256];
    printf("----CALCULATION HISTORY----\n");
    while (fgets(line,sizeof(line),file)) {
        printf("%s\n", line);
    }
    fclose(file);
}

// clear the calculation history
void clearHistory(void) {
    FILE *file = fopen(HISTORY_FILE,"w"); // open the file in write mode
    if (file == NULL) {
        printf("Error opening the file to clear history\n");
        return;
    }
    fclose(file);
    printf("History cleared successfully!\n");
}