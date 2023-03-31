#include <stdio.h>

int main() {
    // Declare different data types
    int a = 1, b = 2;
    float c = 1.1, d = 2.2;
    char e = 'A';

    // Use integer operators
    printf("Integer operations results:\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n\n", a % b);

    // Use floating point operators
    printf("Floating-point operations results:\n");
    printf("c + d = %.2f\n", c + d);
    printf("c - d = %.2f\n", c - d);
    printf("c * d = %.2f\n", c * d);
    printf("c / d = %.2f\n\n", c / d);

    // Use relational operators
    printf("Relational operations results:\n");
    printf("a > b: %s\n", a > b ? "true" : "false");
    printf("a < b: %s\n", a < b ? "true" : "false");
    printf("a == b: %s\n", a == b ? "true" : "false");
    printf("a != b: %s\n\n", a != b ? "true" : "false");

    // use logical operators
    printf("Logical operations results:\n");
    int result = (a > b) && (c < d);
    printf("(a > b) && (c < d): %s\n", result ? "true" : "false");
    result = (a > b) || (c < d);
    printf("(a > b) || (c < d): %s\n\n", result ? "true" : "false");

    // use bitwise operators
    printf("Bitwise operations results:\n");
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a = %d\n", ~a);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n\n", a >> 1);

    // use character operators
    printf("Character operations results:\n");
    printf("Lowercase of uppercase letter %c is %c\n", e, e + 32);

    return 0;
}

