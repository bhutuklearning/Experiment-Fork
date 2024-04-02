#include <stdio.h>

int main()
{
    float a, b;
    printf("Enter two number for addition, substraction, multiplication and division.\n");
    scanf("%f %f", &a, &b);
    printf("Addition:\n");
    printf("%0.2f \n", a + b);
    printf("Subtraction:\n");
    printf("%0.2f \n", a - b);
    printf("Multiplication:\n");
    printf("%0.2f \n", a * b);
    printf("Division:\n");
    printf("%0.2f \n", a / b);
    return 0;
}