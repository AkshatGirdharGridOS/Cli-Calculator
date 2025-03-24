#include <stdio.h>
#include <math.h>

double addNumbers(double num1, double num2)
{   
    double result;
    result = num1 + num2;
    printf("Sum of %.2lf and %.2lf is %.2lf\n", num1, num2, result);
    return result;
}

double subtractNumbers(double num1, double num2)
{
    double result;
    if (num2 > num1)
    {
        result = num2 - num1;
        printf("Difference of %.2lf and %.2lf is %.2lf\n", num1, num2, result);
        return result;
    }
    else
    {
        result = num1 - num2;
        printf("Difference of %.2lf and %.2lf is %.2lf\n", num1, num2, result);
        return result;
    }
}

double multiplyNumbers(double num1, double num2)
{   
    double result;
    result = num1 * num2;
    printf("Product of %.2lf and %.2lf is %.2lf", num1, num2, result);
}

double divideNumbers(double num1, double num2)
{
    double result;
    if (num2 == 0)
    {
        printf("Denominator cannot be 0\n");
        return 0;  // Return 0 for error case
    }
    result = num1 / num2;
    printf("Division result of %.2lf and %.2lf is %.2lf\n", num1, num2, result);
    return result;
}

double squareRoot(double num1)
{
    double result;  // Changed to double
    if (num1 < 0)
    {
        printf("Square root of a negative number is not defined!\n");
        return 0;  // Return 0 for error case
    }
    result = sqrt(num1);
    printf("Square root of %.2lf is %.2lf\n", num1, result);
    return result;
}

double exponentials(double num1,double num2) {
    double result = pow(num1,num2);
    if (isnan(result)) {
        printf("Error : Exponential result is too large.\n");
        return -1;
    }
    printf("Exponent result is %.2lf\n", result);
}

int modulus(int num1, int num2)
{
    if (num2 == 0)
    {
        printf("Modulus by zero is not allowed!\n");
        return 0;  // Return 0 for error case
    }
    int modResult = num1 % num2;
    printf("Modulus of %d and %d is %d\n", num1, num2, modResult);
    return modResult;
}
