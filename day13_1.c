// Write a program for a simple calculator in C using switch case
#include <stdio.h>

int main() {
	double num1, num2, result;
	int choice;

	printf("Simple Calculator\n");
	printf("Enter first number: ");
	scanf("%lf", &num1);
	printf("Enter second number: ");
	scanf("%lf", &num2);

	printf("\nChoose operation:\n");
	printf("1. Addition (+)\n");
	printf("2. Subtraction (-)\n");
	printf("3. Multiplication (*)\n");
	printf("4. Division (/)\n");
	printf("Enter your choice (1-4): ");
	scanf("%d", &choice);

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
		default:
			printf("Invalid choice!\n");
	}

	return 0;
}