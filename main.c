#include<stdio.h>
int Cong(int a, int b);
int Tru(int a, int b);
int Nhan(int a, int b);
int Chia(int a, int b);
void main() {
	printf("Hello world\n");
	int x = Cong(56, 2);
	printf("Ket qua phep cong x: %d\n", x);
	int y = Tru(56, 2);
	printf("Ket qua phep tru x: %d\n", y);
	int z = Nhan(56, 2);
	printf("Ket qua phep nhan x: %d\n", z);
	int t = Chia(56, 2);
	printf("Ket qua phep chia x: %d\n", t);

}