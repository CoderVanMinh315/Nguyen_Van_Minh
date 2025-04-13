int Cong(int a, int b)
{
	int ketqua = 0;
	ketqua = a + b;
	return ketqua;
}
int Tru(int a, int b)
{
	int ketqua = 0;
	ketqua = a - b;
	return ketqua;
}
int Nhan(int a, int b)
{
	int ketqua = 0;
	ketqua = a * b;
	return ketqua;
}
float Chia(int a, int b)
{
	int ketqua = 0;
	{
		if (b == 0)  // Kiểm tra chia cho 0
		{
			//printf("Lỗi: Không thể chia cho 0\n");
			return 0; // Trả về 0 hoặc có thể xử lý khác tùy theo yêu cầu
		}
		return ketqua = (float)a / b; // Thực hiện phép chia nguyên
	}
}