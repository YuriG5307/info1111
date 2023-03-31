#include <stdio.h>
#include <string.h>

void reverse_string(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

int main() {
    char my_string[] = "Hello, world!";
    printf("Original string: %s\n", my_string);

    reverse_string(my_string);
    printf("Reversed string: %s\n", my_string);

    return 0;
}
