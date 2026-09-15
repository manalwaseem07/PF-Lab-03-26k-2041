#include <stdio.h>

int main()
{
    int num;
    unsigned int unum;
    float f;
    double d;
    char ch;
    long int lnum;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter an unsigned integer: ");
    scanf("%u", &unum);

    printf("Enter a float value: ");
    scanf("%f", &f);

    printf("Enter a double value: ");
    scanf("%lf", &d);

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("Enter a long integer: ");
    scanf("%ld", &lnum);

    printf("\n========================================\n");
    printf("       DATA TYPE DEMONSTRATION\n");
    printf("========================================\n");

    printf("\nInteger:\n");
    printf("Decimal           : %d\n", num);
    printf("Octal             : %o\n", num);
    printf("Hexadecimal lower : %x\n", num);
    printf("Hexadecimal upper : %X\n", num);

    printf("\nUnsigned Integer  : %u\n", unum);

    printf("\nFloat:\n");
    printf("%%f                : %f\n", f);
    printf("%%e                : %e\n", f);
    printf("%%g                : %g\n", f);

    printf("\nDouble:\n");
    printf("%%f                : %f\n", d);
    printf("%%e                : %e\n", d);
    printf("%%g                : %g\n", d);

    printf("\nCharacter         : %c\n", ch);
    printf("Long Integer      : %ld\n", lnum);

    return 0;
}
