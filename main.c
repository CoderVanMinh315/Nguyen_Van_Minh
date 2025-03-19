#include <stdio.h>

// Function to count the number of space characters in a string
int count_spaces(const char* str) {
    int count = 0;
    while (*str) {
        if (*str == ' ') {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[] = "Hello MINH. MINH";
    int space_count = count_spaces(str);
    printf("Number of space characters in the string: %d\n", space_count);
    return 0;
}