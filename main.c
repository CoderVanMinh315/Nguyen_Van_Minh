#include<stdio.h>
int count_words(const char* str) {
    int count = 0;
    int in_word = 0;
    while (*str) {
        if (*str == ' ' || *str == '\n' || *str == '\t') {
            in_word = 0;
        }
        else if (in_word == 0) {
            in_word = 1;
            count++;
        }
        str++;
    }
    return count;
}
int main() {
	char str[] = "Hello world! Van Minh day";
    int worlds = count_words(str);
	printf("Count worlds string: %d\n", worlds);
}