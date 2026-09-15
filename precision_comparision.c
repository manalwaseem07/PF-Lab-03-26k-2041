#include <stdio.h>

int main()
{
    float f;
    double d;

    printf("Enter a float value: ");
    scanf("%f", &f);

    printf("Enter a double value: ");
    scanf("%lf", &d);

    printf("\n========================================\n");
    printf("          PRECISION COMPARISON\n");
    printf("========================================\n");

    printf("\nFloat value:\n");
    printf("Default : %f\n", f);
    printf("2 digits: %.2f\n", f);
    printf("4 digits: %.4f\n", f);
    printf("6 digits: %.6f\n", f);

    printf("\nDouble value:\n");
    printf("Default : %f\n", d);
    printf("2 digits: %.2f\n", d);
    printf("4 digits: %.4f\n", d);
    printf("6 digits: %.6f\n", d);

    return 0;
}
