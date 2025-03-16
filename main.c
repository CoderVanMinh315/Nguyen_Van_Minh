#include <stdio.h>

int main() {
    char str[] = "Hello";
    int count = 0;

    while (str[count] != '\0') {
        count++;
    }

    printf("Chuoi: %s\n", str);
    printf("So luong ki tu: %d\n", count);

    return 0;
}
