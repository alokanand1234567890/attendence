#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Get input from user
    printf("Enter first number: ");
    scanf("%lf", &num1);
    
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);  // Note the space before %c to consume any whitespace
    
    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Perform calculation using switch case
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
            
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
            
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
            
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
            
        case '%':
            if(num2 != 0) {
                result = (int)num1 % (int)num2;  // Type casting to int for modulus
                printf("%d %% %d = %d\n", (int)num1, (int)num2, (int)result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
            
        default:
            printf("Error! Invalid operator. Please enter +, -, *, /, or %%\n");
    }

    return 0;
} 