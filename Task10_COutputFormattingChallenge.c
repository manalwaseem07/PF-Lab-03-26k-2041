```c id="v7y2ka"
#include <stdio.h>

int main()
{
    char name[100];
    int rollNumber;
    char section;
    float value;
    char sampleCharacter;

    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &rollNumber);

    printf("Enter section: ");
    scanf(" %c", &section);

    printf("Enter a floating-point value: ");
    scanf("%f", &value);

    sampleCharacter = 'A';

    printf("\n=============================================\n");
    printf("\t\tPROGRAMMING FUNDAMENTALS\n");
    printf("=============================================\n");

    printf("Name    : ");
    puts(name);

    printf("Roll No : %d\n", rollNumber);
    printf("Section : %c\n", section);

    printf("C Topics:\n");
    printf("1. Variables\n");
    printf("2. Data Types\n");
    printf("3. Input/Output\n");
    printf("4. Format Specifiers\n");
    printf("5. Escape Sequences\n");

    printf("Sample Character: '");
    putchar(sampleCharacter);
    printf("'\n");

    printf("Sample Question: \"What is C?\"\n");

    printf("Floating Value:\n");
    printf("Default : %f\n", value);
    printf("2-digit : %.2f\n", value);
    printf("4-digit : %.4f\n", value);

    printf("=============================================\n");

    return 0;
}
```

### 📁 File name

**`Task10_COutputFormattingChallenge.c`**

### Example output

If you enter:

```text
Enter student name: Ali Ahmed
Enter roll number: 1023
Enter section: A
Enter a floating-point value: 12.345678
```

You'll get approximately:

```text
=============================================
        PROGRAMMING FUNDAMENTALS
=============================================
Name    : Ali Ahmed
Roll No : 1023
Section : A
C Topics:
1. Variables
2. Data Types
3. Input/Output
4. Format Specifiers
5. Escape Sequences
Sample Character: 'A'
Sample Question: "What is C?"
Floating Value:
Default : 12.345678
2-digit : 12.35
4-digit : 12.3457
=============================================
```

**Escape sequences used:** `\n` and `\t`.

**Input functions used:** `fgets()`, `scanf()`, `getchar()`/`putchar()`.

**Output functions used:** `printf()`, `puts()`, `putchar()`.
