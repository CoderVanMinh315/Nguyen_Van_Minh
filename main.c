#include <stdio.h>

void capitalizeWords(char* str) {
    int capitalize = 1; // Cờ để kiểm tra có cần in hoa không

    while (*str) {
        if (*str == ' ') {
            capitalize = 1; // Đánh dấu từ mới khi gặp khoảng trắng
        }
        else if (capitalize && *str >= 'a' && *str <= 'z') {
            *str -= 32; // Chuyển chữ thường thành chữ hoa
            capitalize = 0; // Tắt cờ sau khi in hoa
        }
        else {
            capitalize = 0; // Không in hoa các ký tự còn lại
        }
        str++;
    }
}

int main() {
    char str[] = "xin chao Viet Nam ";
    capitalizeWords(str);
    printf("%s\n", str); 
    return 0;
}
