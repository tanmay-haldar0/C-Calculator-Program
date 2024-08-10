#include <stdio.h>

int main() {
    int choice;
    double num1, num2, result;

    // Display the menu to the user
    printf("Simple Calculator\n");
    printf("-----------------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");

    do {
        // Prompt user to select an operation
        printf("\nEnter your choice (1-5): ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            // Prompt the user to input two numbers
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
        }

        // Perform the selected operation
        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please select a valid option.\n");
        }
    } while (choice != 5);

    return 0;
}
