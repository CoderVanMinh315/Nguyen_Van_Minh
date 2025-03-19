#include<stdio.h>
void to_uppercase(char* str) {
	while (*str) {
		if (*str >= 'a' && *str <= 'z') {
			*str = *str - ('a' - 'A');
		}
		str++;
	}
}
int main() {
	char str[] = "Hello world! Van Minh day";
	to_uppercase(str);
	printf("Uppercase string: %s\n", str);
}