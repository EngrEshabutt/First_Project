#include <stdio.h>      // Standard input and output library

int main()              // Main function starts
{
    char op;            // Variable to store operator
    double num1;        // Variable for first number
    double num2;        // Variable for second number
    double result;      // Variable to store result

    printf("\n");       // Print a blank line

    // Display calculator header
    printf("=====================================\n");
    printf("|         SMART CALCULATOR          |\n");
    printf("=====================================\n");

    // Take first number input from user
    printf("| Enter First Number : ");
    scanf("%lf", &num1);

    // Take operator input from user
    printf("| Enter Operator (+,-,*,/) : ");
    scanf(" %c", &op);

    // Take second number input from user
    printf("| Enter Second Number : ");
    scanf("%lf", &num2);

    // Perform operation based on selected operator
    switch(op)
    {
        case '+':                   // Addition case
            result = num1 + num2;   // Add two numbers
            break;                  // Exit switch

        case '-':                   // Subtraction case
            result = num1 - num2;   // Subtract two numbers
            break;                  // Exit switch

        case '*':                   // Multiplication case
            result = num1 * num2;   // Multiply two numbers
            break;                  // Exit switch

        case '/':                   // Division case

            // Check if second number is zero
            if(num2 == 0)
            {
                printf("|\n");      // Print vertical line
                printf("| Error: Division by Zero!\n"); // Display error
                return 0;           // End program
            }

            result = num1 / num2;   // Divide two numbers
            break;                  // Exit switch

        default:                    // Invalid operator case

            printf("|\n");          // Print vertical line
            printf("| Invalid Operator!\n"); // Display error message

            return 0;               // End program
    }

    // Display result section
    printf("=====================================\n");
    printf("| Result = %.2lf\n", result);
    printf("=====================================\n");

    return 0;                       // Program ends successfully
}