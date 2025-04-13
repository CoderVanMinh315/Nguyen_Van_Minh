#include <stdio.h>
#include <locale.h>
// Hàm đếm số lượng ký tự trong chuỗi

int SoLuongKyTu(char* str)
{
    int sl = 0;
    while (str[sl] != 0)
    {
        sl++;
    }
    return sl;
}

// Hàm tìm ký tự trong chuỗi
char* TimKyTu(char* chuoi, char ky_tu)
{
    while (*chuoi != '\0') // Duyệt đến hết chuỗi
    {
        if (*chuoi == ky_tu)
            return chuoi; // Trả về địa chỉ của ký tự tìm thấy
        chuoi++;
    }
    return NULL; // Không tìm thấy
}

// Hàm lấy trạng thái của "fan"
int TrangThaiFan(char* data)
{
    char* pos = TimKyTu(data, 'f'); // Tìm ký tự 'f' đầu tiên
    if (!pos) return -1; // Không tìm thấy

    // Kiểm tra xem có đúng là "fan" không
    if (*(pos + 1) != 'a' || *(pos + 2) != 'n')
        return -1;

    pos = TimKyTu(pos, ':'); // Tìm dấu ':'
    if (!pos) return -1;

    pos += 2; // Bỏ qua dấu ':' và khoảng trắng

    // Kiểm tra trạng thái
    if (*pos == '\"' && *(pos + 1) == 'o' && *(pos + 2) == 'n')
        return 1;
    else if (*pos == '\"' && *(pos + 1) == 'o' && *(pos + 2) == 'f' && *(pos + 3) == 'f')
        return 0;

    return -1; // Lỗi đọc trạng thái
}

int main()
{   
    char data[] = "HTTP1.1 200 OK{"\
        "\"light\": \"on\","\
        "\"fan\" : \"on\","\
        "\"motor\" : \"off\"}";

    printf("Du lieu goc: %s\n", data);

    int fan_status = TrangThaiFan(data);
    if (fan_status == 1)
        printf("Trang thai quat: ON\n");
    else if (fan_status == 0)
        printf("trang thai quat: OFF\n");
    else
        printf("Loi doc trang thai quat!\n");

    return 0;
}
