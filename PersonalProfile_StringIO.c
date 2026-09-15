```c
#include <stdio.h>

int main()
{
    char name[100];
    char city[50];
    char university[100];
    char department[100];

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your city: ");
    fgets(city, sizeof(city), stdin);

    printf("Enter your university: ");
    fgets(university, sizeof(university), stdin);

    printf("Enter your department: ");
    fgets(department, sizeof(department), stdin);

    printf("\n========================================\n");
    puts("             STUDENT PROFILE");
    printf("========================================\n");

    printf("Name       : ");
    puts(name);

    printf("City       : ");
    puts(city);

    printf("University : ");
    puts(university);

    printf("Department : ");
    puts(department);

    printf("========================================\n");

    return 0;
}
```

**File name:** `Task8_Personal_Profile.c`

`fgets()` is used instead of `scanf("%s")` because it can read **spaces**, so names like `Ali Ahmed` work correctly.
