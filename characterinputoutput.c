```c
#include <stdio.h>

int main()
{
    char ch1, ch2, ch3;

    printf("Enter first character: ");
    ch1 = getchar();
    getchar();

    printf("Enter second character: ");
    ch2 = getchar();
    getchar();

    printf("Enter third character: ");
    ch3 = getchar();

    printf("\n--------------------------------\n");
    printf("Characters Entered:\n");

    printf("Character 1 : ");
    putchar(ch1);

    printf("\nCharacter 2 : ");
    putchar(ch2);

    printf("\nCharacter 3 : ");
    putchar(ch3);

    printf("\n--------------------------------\n");

    return 0;
}
```

**File name:** `Task7_CharacterInputOutput.c`

The `\n` escape sequence is used to move to a new line, and `getchar()` reads each character while `putchar()` displays it.
