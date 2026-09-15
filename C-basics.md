# C Programming Basics

## 1. Data Types

Data types specify the type of data that a variable can store.

| Data Type | Description                                                                                      |
| --------- | ------------------------------------------------------------------------------------------------ |
| `int`     | Used to store whole numbers (integers), such as `10`, `-5`, or `100`.                            |
| `float`   | Used to store single-precision decimal numbers, such as `3.14`.                                  |
| `double`  | Used to store double-precision decimal numbers with greater precision than `float`.              |
| `char`    | Used to store a single character, such as `'A'` or `'7'`.                                        |
| `bool`    | Used to store a Boolean value: `true` or `false`. It requires `stdbool.h` in standard C.         |
| `void`    | Represents the absence of a value. It is commonly used for functions that do not return a value. |

---

## 2. Format Specifiers

Format specifiers tell C how a value should be interpreted or displayed.

| Format Specifier | Description                                                          |
| ---------------- | -------------------------------------------------------------------- |
| `%d`             | Displays a signed decimal integer.                                   |
| `%u`             | Displays an unsigned decimal integer.                                |
| `%o`             | Displays an unsigned integer in octal (base 8).                      |
| `%x`             | Displays an unsigned integer in hexadecimal using lowercase letters. |
| `%X`             | Displays an unsigned integer in hexadecimal using uppercase letters. |
| `%f`             | Displays a floating-point number in decimal notation.                |
| `%e`             | Displays a floating-point number in scientific notation.             |
| `%c`             | Displays a single character.                                         |
| `%s`             | Displays a string of characters.                                     |
| `%ld`            | Displays a long signed decimal integer.                              |

---

## 3. Input/Output Functions

### `scanf()`

`scanf()` is used to take formatted input from the user.

**Example:**

```c
int age;
scanf("%d", &age);
```

### `printf()`

`printf()` is used to display formatted output on the screen.

**Example:**

```c
printf("Age = %d", age);
```

### `getchar()`

`getchar()` reads a single character from standard input.

**Example:**

```c
char ch;
ch = getchar();
```

### `putchar()`

`putchar()` displays a single character on the screen.

**Example:**

```c
putchar(ch);
```

### `fgets()`

`fgets()` reads a line of text, including spaces, from an input stream.

**Example:**

```c
char name[50];
fgets(name, sizeof(name), stdin);
```

### `puts()`

`puts()` displays a string followed by a newline.

**Example:**

```c
puts("Hello World");
```

---

## 4. Escape Sequences

Escape sequences are special characters written using a backslash (`\`) to represent actions or characters that cannot easily be written directly.

| Escape Sequence | Meaning               | Example                   |
| --------------- | --------------------- | ------------------------- |
| `\n`            | New line              | `printf("Hello\nWorld");` |
| `\t`            | Horizontal tab        | `printf("Name:\tManal");` |
| `\\`            | Backslash             | `printf("C:\\Folder");`   |
| `\"`            | Double quotation mark | `printf("\"Hello\"");`    |
| `\'`            | Single quotation mark | `printf("\'A\'");`        |
| `\b`            | Backspace             | `printf("ABC\b");`        |

---

## 5. Precision

Precision specifies the number of digits displayed after the decimal point when using floating-point output.

For `printf()`, precision is written after a dot (`.`) in the format specifier.

**Example:**

```c
float value = 12.34567;

printf("%.2f", value);
```

**Output:**

```text
12.35
```

Here, `.2` specifies that **2 digits should be displayed after the decimal point**.

Other examples:

```c
printf("%.1f", value);   // 12.3
printf("%.3f", value);   // 12.346
printf("%.4f", value);   // 12.3457
```

Therefore, the general format is:

```text
%.[number]f
```

For example, `%.3f` displays a floating-point value with three digits after the decimal point.
