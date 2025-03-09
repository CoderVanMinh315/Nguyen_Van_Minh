#include<stdio.h>
#include"toan.h"
void main() {
	printf("Hello world\n");
	int x = Cong(56, 2);
	printf("Ket qua phep cong x: %d\n", x);
	int y = Tru(56, 2);
	printf("Ket qua phep tru x: %d\n", y);
	int z = Nhan(56, 2);
	printf("Ket qua phep nhan x: %d\n", z);
	float t = Chia(56, 7);
	printf("Ket qua phep chia x: %.2f\n", t);

}